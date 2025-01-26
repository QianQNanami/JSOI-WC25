#include<bits/stdc++.h>
using namespace std;
int h[1009][1009],a[1009][1009];
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
int main(){
	int m,n,ans=-1e9;cin>>m>>n;
	for(int i=1;i<=m;i++)for(int j=1;j<=n;j++)cin>>h[i][j];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]==1){
				int sum=1e9;
				for(int k=0;k<4;k++){
					int tx=dx[k]+i;
					int ty=dy[k]+j;
					if(tx>=1&&ty>=1&&tx<=m&&ty<=n){
						sum=min(sum,abs(h[tx][ty]-h[i][j]));
					}
				}
				ans=max(ans,sum);
			}
		}
	}
	cout<<ans;
} 
