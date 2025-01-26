#include <bits/stdc++.h>
using namespace std;
int n, m, ans = 1000000, cnt = 0;
string a[310];
bool b[310][310];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
void dfs(int x, int y){
	if(a[x][y] == 'T'){
		ans = min(ans, cnt);
	} else {
		for (int i = 0; i < 4; i++){
			int nx = x + dx[i], ny = y + dy[i];
			if(nx >= 1 && nx <= n && ny >= 0 && ny < m && a[nx][ny] != 'S' && a[nx][ny] != 'R' && b[nx][ny] == 0){
				if(a[nx][ny] == 'B'){
					cnt++;
				}
				cnt++;
				b[x][y] = 1;
				dfs(nx, ny);
				cnt--;
				b[x][y] = 0;
				if(a[nx][ny] == 'B'){
					cnt--;
				}
			}
		}
	}
}
int main(){
	cin >> n >> m;
	int x, y;
	for (int i = 1; i <= n; i++){
		cin >> a[i];
		for (int j = 0; j < m; j++){
			if(a[i][j] == 'Y'){
				x = i;
				y = j;
			}
		}
	}
	dfs(x, y);
	if(ans == 1000000){
		cout << -1;
	} else{
		cout << ans;
	}
	return 0;
}
