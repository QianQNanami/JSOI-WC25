#include<bits/stdc++.h>
using namespace std;
int a[505][505];
bool s[505][505],vis[505][505];
int n,m,tx[250005],ty[250005],k,ans;
int dx[4]= {-1,1,0,0},dy[4]= {0,0,-1,1};
struct node {
	int x,y,d;
};
int bfs(int x,int y,int tmx,int tmy) {
	node temp;
	int tmpans=INT_MAX;
	queue<node> q;
	temp.x=x,temp.y=y,temp.d=INT_MAX;
	q.push(temp);
	vis[x][y]=1;
	while(!q.empty()) {
		temp=q.front();
		q.pop();
		if(temp.x==tmx&&temp.y==tmy) tmpans=min(tmpans,temp.d);
		else {
			for(int i=0; i<4; i++) {
				int sx=dx[i]+temp.x,sy=dy[i]+temp.y;
				if(sx>0&&sx<=n&&sy>0&&sy<=m&&vis[sx][sy]==0) {
					node tmp;
					tmp.x=sx,tmp.y=sy,tmp.d=min(temp.d,abs(a[temp.x][temp.y]-a[sx][sy]));
					vis[sx][sy]=1;
					q.push(tmp);
				}
			}
		}
	}
	return tmpans;
}
int main() {
	cin>>n>>m;
	for(int i=1; i<=n; i++) for(int j=1; j<=m; j++)cin>>a[i][j];
	for(int i=1; i<=n; i++) for(int j=1; j<=m; j++) {
			cin>>s[i][j];
			if(s[i][j]==1) {
				tx[++k]=i;
				ty[k]=j;
			}
		}
	for(int i=1; i<k; i++) {
		memset(vis,0,sizeof(vis));
		ans=max(ans,bfs(tx[i],ty[i],tx[i+1],ty[i+1]));
	}
	cout<<ans;
	return 0;
}

