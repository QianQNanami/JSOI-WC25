#include<bits/stdc++.h>
using namespace std;
int mp[310][310],vis[310][310],n,m;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
struct node {
	int x,y,step;
};
queue<node> q;
int bfs(int xy,int yy,int xt,int yt) {
	node tmp;
	tmp.x = xy;
	tmp.y = yy;
	tmp.step = 0;
	q.push(tmp);
	vis[xy][yy] = 1;
	while(!q.empty()) {
		node frt = q.front();
		q.pop();
		for(int i = 0; i <= 3; i ++) {
			int nx = frt.x + dx[i];
			int ny = frt.y + dy[i];
			if(nx >= 1 && nx <= n && ny >= 1 && ny <= m) {
				if(vis[nx][ny] == 0 && mp[nx][ny] != -1) {
					node tmp;
					tmp.x = nx;
					tmp.y = ny;
					tmp.step = frt.step + 1;
					if(mp[tmp.x][tmp.y] == 1) {
						tmp.step ++;
					}
					vis[nx][ny] = 1;
					q.push(tmp);
					if(nx == xt && ny == yt) {
						return tmp.step;
					}
				}
			}
		}
	}
	return -1;
}
signed main() {
	scanf("%d",&n);
	scanf("%d",&m);
	int xy,yy,xt,yt;
	for(int i = 1; i <= n; i ++) {
		for(int j = 1; j <= m; j ++) {
			char c;
			cin >> c;
			if(c == 'E') {
				mp[i][j] = 0;
			} else if(c == 'B') {
				mp[i][j] = 1;
			} else if(c == 'R' || c == 'S') {
				mp[i][j] = -1;
			} else if(c == 'T') {
				xt = i;
				yt = j;
				mp[i][j] = 0;
			} else if(c == 'Y') {
				xy = i;
				yy = j;
			}
		}
	}
	printf("%d\n",bfs(xy,yy,xt,yt));
	return 0;
}
