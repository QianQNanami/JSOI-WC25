#include<bits/stdc++.h>
using namespace std;
int mp[510][510],vis[510][510],n,m,idx = 1,mx = 0;
int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};
struct node {
	int x,y,step;
};
queue<node> q;
struct hd {
	int x,y;
} hds[510];
int bfs(int xa,int ya,int xb,int yb) {
	int mn = -1;
	node tmp;
	tmp.x = xa;
	tmp.y = ya;
	tmp.step = 0;
	q.push(tmp);
	vis[xa][ya] = 1;
	while(!q.empty()) {
		node frt = q.front();  
		q.pop();
		for(int i = 0; i <= 3; i ++) {
			int nx = frt.x + dx[i];
			int ny = frt.y + dy[i];
			if(nx >= 1 && nx <= n && ny >= 1 && ny <= m) {
				if(vis[nx][ny] == 0) {
					node tmp;
					tmp.x = nx;
					tmp.y = ny;
					tmp.step = max(frt.step,abs(mp[nx][ny] - mp[frt.x][frt.y]));
					vis[nx][ny] = 1;
					q.push(tmp);
					if(nx == xb && ny == yb) {
						if(mn == -1) {
							mn = tmp.step;
						} else {
							mn = min(mn,tmp.step);
						}
					}
				}
			}
		}
	}
	return mn;
}
signed main() {
	cin >> n >> m;
	for(int i = 1; i <= n; i ++) {
		for(int j = 1; j <= m; j ++) {
			scanf("%d",&mp[i][j]);
		}
	}
	for(int i = 1; i <= n; i ++) {
		for(int j = 1; j <= m; j ++) {
			int num;
			scanf("%d",&num);
			if(num == 1) {
				hds[idx].x = i;
				hds[idx].y = j;
				idx ++;
			}
		}
	}
	for(int i = 1; i < idx; i ++) {
		for(int j = i + 1; j < idx; j ++) {
			mx = max(mx,bfs(hds[i].x,hds[i].y,hds[j].x,hds[j].y));
		}
	}
	printf("%d",mx);
	return 0;
}/*
3 5
20 21 18 99 5
19 22 20 16 26
18 17 40 60 80
1 0 0 0 1
0 0 0 0 0
0 0 0 0 1
*/
