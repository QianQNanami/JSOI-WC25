#include<bits/stdc++.h>
using namespace std;
int m,n,minn = INT_MAX,xx,yy;
queue<int> p,q,t;
int dirx[4] = {1,0,-1,0},diry[4] = {0,1,0,-1};
char a[301][301];
bool vis[301][301];
void bfs(int x,int y) {
	p.push(x);
	q.push(y);
	t.push(0);
	while(!p.empty()&&!q.empty()) {
		for(int i = 0;i<4;i++) {
			x=p.front() + dirx[i];
			y=q.front() + diry[i];
			if(1<=x&&x<=m&&1<=y&&y<=n&&vis[x][y]) {
				p.push(x);
				q.push(y);
				if(a[x][y] == 'E'||a[x][y] == 'T')  t.push(t.front()+1);
				else if(a[x][y] == 'B')  t.push(t.front()+2);
				vis[x][y] = false;
			}
		}
		if(a[p.front()][q.front()] == 'T')  minn = min(minn,t.front());
		t.pop();
		p.pop();
		q.pop();
	}
}
int main() {
	cin >> m >> n;
	for(int i = 1;i<=m;i++) {
		for(int j = 1;j<=n;j++) {
			cin >> a[i][j];
			vis[i][j] = true;
			if(a[i][j] == 'S'||a[i][j] == 'R'||a[i][j] == 'Y')vis[i][j] = false;
			if(a[i][j] == 'Y') xx = i,yy = j;
		}
	}
	bfs(xx,yy);
	if(minn!=INT_MAX)  cout << minn;
	else cout << -1;
	return 0;
}
