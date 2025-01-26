#include <bits/stdc++.h>
using namespace std;
int n, m, ans = 1000000010, cnt1 = 0, cnt2 = 0, sum = 0;
int a[510][510];
bool b[510][510], d[510][510];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};
void dfs(int x, int y){
	bool z = 0;
	if(b[x][y] == 1){
		cnt1++;
		if(cnt1 == sum){
			ans = min(ans, cnt2);
			z = 1;
		}
	}
	int c = 0;
	bool w = 0;
	if(z == 0){
		for (int i = 0; i < 4; i++){
			int nx = x + dx[i], ny = y + dy[i];
			if(nx >= 1 && nx <= n && ny >= 1 && ny <= m && d[nx][ny] == 0){
				if(cnt2 < max(a[x][y], a[nx][ny]) - min(a[x][y], a[nx][ny])){
					c = cnt2;
					cnt2 = max(a[x][y], a[nx][ny]) - min(a[x][y], a[nx][ny]);
					w = 1;
				}
				d[x][y] = 1;
				dfs(nx, ny);
				d[x][y] = 0;
				if(w = 1){
					cnt2 = c;
				}
			}
		}
	}
}
int main(){
	cin >> n >> m;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
		    cin >> a[i][j];
		}
	}
	int x, y;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= m; j++){
		    cin >> b[i][j];
		    if(b[i][j] == 1){
		    	sum++;
		    	x = i;
		    	y = j;
			}
		}
	}
	dfs(x, y);
	cout << ans;
	return 0;
}
