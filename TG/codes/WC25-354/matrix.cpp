#include<bits/stdc++.h>
using namespace std;
int a[405][405][405][2];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			cin>>a[i][j][1][0];
			a[i][j][1][1]=a[i][j][1][0];
		}
	}
	for (int k=2;k<=n;k++){
		for (int i=k;i<=n;i++){
			for (int j=k;j<=n;j++){
				a[i][j][k][0]=a[i-1][j-1][k-1][0]+a[i][j][1][0];
			}
		}
		for (int j=n-k+1;j>=1;j--){
			for (int i=k;i<=n;i++){
				a[i][j][k][1]=a[i-1][j+1][k-1][1]+a[i][j][1][1];
			}
		}
	}
	int v=INT_MIN;
	for (int k=2;k<=n;k++){
		for (int i=k;i<=n;i++){
			for (int j=k;j<=n;j++){
				v=max(v,a[i][j][k][0]-a[i][j-k+1][k][1]);
			}
		}
	}
	cout<<v;
	return 0;
}

