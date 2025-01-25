#include<iostream>
using namespace std;
struct node{
	int ld,rd;
}b[105][105];
int n,a[105][105];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(i==1||j==1)b[i][j].ld=a[i][j];
			if(i==1||j==n)b[i][j].rd=a[i][j];
		}
	}
	for(int i=2;i<=n;i++)
		for(int j=2;j<=n;j++)
			b[i][j].ld=b[i-1][j-1].ld+a[i][j];
	for(int i=2;i<=n;i++)
		for(int j=1;j<=n-1;j++)
			b[i][j].rd=b[i-1][j+1].rd+a[i][j];
	int maxx=0;
	for(int k=2;k<=n;k++){
		for(int i=k;i<=n;i++){
			for(int j=1;j<=n-k+1;j++){
				maxx=max(maxx,b[i][j].ld+b[i][j+k-1].rd);
			}
		}
	}
	cout<<maxx;
	return 0;
} 
