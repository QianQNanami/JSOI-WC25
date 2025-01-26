#include<bits/stdc++.h>
using namespace std;

typedef pair<int, int> PII;
const int N = 300;
const int dx[] = {-1, 0, 1, 0};
const int dy[] = { 0, 1, 0,-1};
int m, n, x, y, mx, my;
char a[N + 5][N + 5];
int p[N + 5][N + 5];
bool vis[N + 5][N + 5] = {0};
queue<PII> q;

int bfs(){
	while(!q.empty()){
		for(int i = 0;i < 4;i++){
			PII t = q.front();
			x = t.first;
			y = t.second;
			int tx = x + dx[i];
			int ty = y + dy[i];
			if(tx < 1 || tx > m || ty < 1 || ty > n){
				continue;
			}
			if(a[tx][ty] == 'R' || a[tx][ty] == 'S'){
				continue;
			}
			if(vis[tx][ty] == 1){
				continue;
			}
			q.push({tx, ty});
			vis[tx][ty] = 1;
			if(a[tx][ty] == 'B'){
				p[tx][ty] = p[x][y] + 2;
			}
			else p[tx][ty] = p[x][y] + 1;
			
			//cout << x << " " << y << "\n";
		}
		q.pop();
	}
	if(p[mx][my] == 0) return -1;
	else return p[mx][my] - 1;
}

int main(){
	cin >> m >> n;
	for(int i = 1;i <= m;i++){
		for(int j = 1;j <= n;j++){
			cin >> a[i][j];
			if(a[i][j] == 'Y'){
				x = i;
				y = j;
			}
			if(a[i][j] == 'T'){
				mx = i;
				my = j;
			}
		}
	}
	vis[x][y] = 1;
	p[x][y] = 1;
	q.push({x, y});
	cout << bfs();
	return 0;
}
