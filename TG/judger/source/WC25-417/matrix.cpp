#include <bits/stdc++.h>
using namespace std;
int a[501][501],b[501][501];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int x;
			cin>>x;
			if(i==1){
				a[1][j]=b[1][j]=x;
			}
			else if(j==1){
				a[i][j]=x;
				b[i][j]=b[i-1][j+1]+x;
			}
			else if(j==n){
				b[i][j]=x;
				a[i][j]=a[i-1][j-1]+x;
			}
			else{
				a[i][j]=a[i-1][j-1]+x;
				b[i][j]=b[i-1][j+1]+x;
			}
		}
	}
	int maxn=-INT_MAX;
	for(int l=2;l<=n;l++){
		for(int i=1;i<=n-l+1;i++){
			for(int j=1;j<=n-l+1;j++){
				int d;
				if(i==1){
					d=a[i+l-1][j+l-1]-b[i+l-1][j];
				}
				else if(j==1){
					d=a[i+l-1][j+l-1]-(b[i+l-1][j]-b[i-1][j+l]);
				}
				else if(j==n-l+1){
					d=(a[i+l-1][j+l-1]-a[i-1][j-1])-b[i+l-1][j];
				}
				else{
					d=(a[i+l-1][j+l-1]-a[i-1][j-1])-(b[i+l-1][j]-b[i-1][j+l]);
				}
				if(d>maxn){
					maxn=d;
				}
			}
		}
	}
	cout<<maxn;
}
