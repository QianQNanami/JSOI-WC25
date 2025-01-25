#include <bits/stdc++.h>
using namespace std;
int a[410][410],b[410][410],c[410][410];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	int n,ans=-1e9;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			scanf("%d",&a[i][j]);
			b[i][j]=b[i-1][j-1]+a[i][j];
			c[i][j]=c[i-1][j+1]+a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			for(int k=1;k+i<=n&&k+j<=n;k++){
				ans=max(ans,(b[i+k][j+k]-b[i-1][j-1])-(c[i+k][j]-c[i-1][j+k+1]));
			}
		}
	}
	printf("%d",ans);
}
