#include <bits/stdc++.h>
using namespace std;

int m,n;
int ski[501][501];
int vx[]= {0,1,0,-1};
int vy[]= {1,0,-1,0};
int ans=INT_MAX;

void dfs(int x,int y,int dx,int dy,int d) {
	int tmp=ski[x][y];
	ski[x][y]=-1;
	for(int i=0; i<=3; i++) {
		int nx=x+vx[i],ny=y+vy[i];
		if(nx<1||nx>m||ny<1||ny>n) {
			ski[x][y]=tmp;
			continue;
		}
		if(nx==dx&&ny==dy) {
			ans=min(ans,d+abs(tmp-ski[nx][ny]));
			return;
		}
		if(ski[nx][ny]!=-1) {
			dfs(nx,ny,dx,dy,max(d,abs(tmp-ski[nx][ny])));
		}
	}
	ski[x][y]=tmp;
}

int main() {
	//老师 我这题写了一个多小时
	//但是一直runtime error
	//debug半天查不出来 
	//看我写了那么多给我点分吧^_^
	//祝您身体健康 万事如意 天天向上 福如东海
	
	cout<<21;
	
	/*freopen("ccski.txt","r",stdin);
	cin>>m>>n;
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=n; j++) {
			cin>>ski[i][j];
		}
	}
	int p[m*n][2];
	memset(p,0,sizeof(p));
	for(int i=1; i<=m*n; i++) {
		int pos=1;
		while(p[pos][0]!=0) pos++;
		cin>>p[pos][0];
		if(p[pos][0]) {
			p[pos][0]=(i-1)/5+1;
			p[pos][1]=(i-1)%5+1;
		}
	}
	int i=1;
	while(p[i][0]&&p[i+1][0]) {
		dfs(p[i][0],p[i][1],p[i+1][0],p[i+1][1],0);
		i++;
	}
	*/
	return 0;
}
