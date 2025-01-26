#include<bits/stdc++.h>
using namespace std;
int n,m,sx,sy,sum;
int mp[505][505],num[505][505],vis[505][505],step[505][505];
int xx[] = {-1,0,1,0};
int yy[] = {0,-1,0,1};
void dfs(int x, int y, int cnt){
	//cout << "x ->" << x << "  y ->" << y <<"  cnt ->" <<cnt << "\n";
	if(num[x][y]){
		if(step[x][y] == -1) step[x][y] = cnt;
		else step[x][y] = min(cnt,step[x][y]);
	}
	for(int i = 0; i < 4; i++){
		int nx = x + xx[i]; 
		int ny = y + yy[i];
		if(nx > 0 && nx <= n && ny > 0 && ny <= m && !vis[nx][ny]){
			vis[x][y] = 1;
			int lcnt = cnt;
			cnt = max( abs(mp[nx][ny] - mp[x][y]), cnt);
			dfs(nx,ny,cnt);
			vis[x][y] = 0;
			cnt = lcnt;
		} 
	}
}
void read(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) cin >> mp[i][j];
	for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++){
		cin >> num[i][j];
		if(num[i][j]) sx = i, sy = j;
	}
	memset(step,-1,sizeof(step));
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0); 
	read();
	dfs(sx,sy,0);
	int maxn = -1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(num[i][j]) maxn = max(step[i][j],maxn);

		}
	}
	cout << maxn;
	return 0;
} 
/*
3 5
20 21 18 99 5
19 22 20 16 26
18 17 40 60 80
1 0 0 0 1
0 0 0 0 0
0 0 0 0 1
*/
