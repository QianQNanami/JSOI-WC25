#include<bits/stdc++.h>
using namespace std;
int m,n,sx,sy,ex,ey;
char mp[305][305];
int xx[] = {-1,0,1,0};
int yy[] = {0,-1,0,1};
bool ans[1200005], vis[305][305];
void dfs(int x,int y, int dep){
	if(x == ex && y == ey) ans[dep] = 1;
	//cout << x << " " << y << " " << dep << "\n";
	for(int i = 0; i < 4; i++){
		int nx = x + xx[i];
		int ny = y + yy[i];
		if(nx >= 0 && nx < m && ny >= 0 && ny < n && (mp[nx][ny] != 'S' && mp[nx][ny] != 'R') && !vis[nx][ny]){
			vis[nx][ny] = 1;
			if(mp[nx][ny] == 'B') dfs(nx,ny,dep+2);
			else dfs(nx,ny,dep+1);
			vis[nx][ny] = 0;
		}
	}
}
int main(){
	cin >> m >> n;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> mp[i][j];
			if(mp[i][j] == 'Y') sx = i, sy = j;
			else if(mp[i][j] == 'T') ex = i, ey = j;
		}
	}
	dfs(sx,sy,0);
	for(int i = 0; i < 1200000; i++){
		if(ans[i]) {
			cout << i;
			return 0;
		}
	}
	cout << -1;
	return 0;
}
/*
		-1					0
	0	x	0			-1	y	1
		1					0
	
	
3 4
YBEB
EERE
SSTE
*/
