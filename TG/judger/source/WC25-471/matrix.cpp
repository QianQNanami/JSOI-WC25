#include<bits/stdc++.h>
using namespace std;
const int N=405;
int a[N][N];
struct Node{
	int left;
	int right;
}b[N][N];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	int n,maxn=INT_MIN;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)scanf("%d",&a[i][j]);
	}
	for(int i=0;i<n;i++){
		b[0][i].left=b[0][i].right=a[0][i];
		b[i][0].left=a[i][0];
		b[i][n-1].right=a[i][n-1];
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<n;j++){
			if(j==0)b[i][j].right=b[i-1][j+1].right+a[i][j];
			else if(j==n-1)b[i][j].left=b[i-1][j-1].left+a[i][j];
			else{
				b[i][j].left=b[i-1][j-1].left+a[i][j];
				b[i][j].right=b[i-1][j+1].right+a[i][j];
			}
		}
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			for(int k=2;k<(n-j+1);k++)maxn=max(maxn,(b[i+k-1][j+k-1].left-b[i][j].left+a[i][j])-(b[i+k-1][j].right-b[i][j+k-1].right+a[i][j+k-1]));
		}
	}
	printf("%d\n",maxn);
	return 0;
}

