#include <bits/stdc++.h>
using namespace std;

int ans=-1;
int m,n;
int yx,yy,tx,ty;
int vx[]= {0,-1,0,1};
int vy[]= {1,0,-1,0};
char maze[301][301];

void dfs(int x,int y,int t) {
	//cout<<x<<" "<<y<<" "<<t<<endl;
	/*if(x==tx and y==ty) {
		ans=min(ans,t);
		return;
	}
	*/
	char c=maze[x][y];
	maze[x][y]='S';
	for(int i=0; i<=3; i++) {
		int dx=x+vx[i],dy=y+vy[i];
		if(dx<1||dx>m||dy<1||dy>n) {
			continue;
		}
		if(dx==tx&&dy==ty) {
			if(ans==-1) ans=t+1;
			else ans=min(ans,t+1);
			maze[x][y]=c;
			return;
		}
		if(maze[dx][dy]=='E') {
			dfs(dx,dy,t+1);
		} else if(maze[dx][dy]=='B') {
			dfs(dx,dy,t+2);
		}
	}
	maze[x][y]='E';
}

int main() {
	cin>>m>>n;
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
			cin>>maze[i][j];
			if(yx==0 and maze[i][j]=='Y') yx=i,yy=j;
			else if(tx==0 and maze[i][j]=='T') tx=i,ty=j;
		}
	}
	//cout<<yx<<" "<<yy<<" "<<tx<<" "<<ty<<endl;
	dfs(yx,yy,0);
	cout<<ans;
	return 0;
}
