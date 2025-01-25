#include<bits/stdc++.h>
using namespace std;
int a[401][401];
int g[401];
int g1[401];
int main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","W",stdout);
	ios::sync_with_stdio(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	int ans=0;
	for(int i=1;i<=n-1;i++){
		for(int j=1;j<=n-1;j++){
			memset(g,0,sizeof(0));
			memset(g1,0,sizeof(0));
			for(int l=0;l+i<=n;l++){
		        g[l]=g[l-1]+a[i+l][j+l];
	        }
	        for(int l=0;l+j<=n;l++){
		        g1[l]=g1[l-1]+a[i+l][min(j+(n-j+1)-1,j+(n-i+1)-1)-l];
		        if(l!=0){
		        	ans=max(ans,g[l]-g1[l]);
				}
	        }
		}
	} 
	cout<<ans;
	return 0;
}
