#include<bits/stdc++.h>
using namespace std;
int n,a[401][401],b[401][401],d=INT_MIN,m[401][401];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>m[i][j];
			a[i][j]=b[i][j]=m[i][j];
		}
	}
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=n-1;j++){
		    a[i][j]+=a[i+1][j+1];
		    b[i][n+1-j]+=b[i+1][n-j];
		}
	}
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=n-1;j++){
			d=max(d,a[i][j]-b[i][j+1]);
		}
	}
	for(int k=2;k<=n-1;k++){
		for(int i=1;i<=n-k;i++){
			for(int j=1;j<=n-k;j++){
			    a[i][j]+=a[i+k-1][j+k-1]-m[i+k-1][j+k-1];
			    b[i][n+1-j]+=b[i+k-1][n-j-k+2]-m[i+k-1][n+2-j-k];
			}
		}
		for(int i=1;i<=n-k;i++){
			for(int j=1;j<=n-k;j++){
				d=max(d,a[i][j]-b[i][i+k]);
			}
		}
	}
	cout<<d;
	return 0;
}
