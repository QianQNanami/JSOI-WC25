#include<bits/stdc++.h>
using namespace std;
int dx[4]= {0,1,0.-1};
int dy[4]= {1,0,-1,0};
int bat[301][301]= {};
bool baal[301][301]= {};
int n,m,ex,ey,bx,by;
int step=0,ans=INT_MAX;
void dfs(int x,int y) {
	if(x==ex&&y==ey) {
		if(step<ans) {
			ans=step;
			return;
		}
	}
	for(int i=0; i<=3; i++) {
		int sx=dx[i]+x;
		int sy=dy[i]+y;
		if(bat[sx][sy]>0&&baal[sx][sy]==0&&sx>0&&sx<=m&&sy>0&&sy<=n) {
			step+=bat[sx][sy];
			baal[sx][sy]=1;
			dfs(sx,sy);
			baal[sx][sy]=0;
		}
	}
}
int main() {
	cin>>m>>n;
	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++) {
			char h;
			cin>>h;
			if(h=='S'||h=='R') bat[i][j]=0;
			if(h=='B') bat[i][j]=2;
			if(h=='E') bat[i][j]=1;
			if(h=='Y') {
				bx=i;
				by=j;
			}
			if(h=='T') {
				ex=i;
				ey=j;
				bat[i][j]=1;
			}
		}
	dfs(bx,by);
	if(ans==INT_MAX) cout<<-1;
	else cout<<ans;
	return 0;
}
