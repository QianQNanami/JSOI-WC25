#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 300;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};
ll n, m, yx, yy, tx, ty, ans = N * N + 5;
char a[N + 5][N + 5];
bool vst[N + 5][N + 5];
bool check(ll x, ll y){
	if(a[x][y] == 'Y' || a[x][y] == 'R' || a[x][y] == 'S'){
		return false;
	}
	if(x < 1 || y < 1 || x > n || y > m){
		return false;
	}
	if(vst[x][y]){
		return false;
	}
	return true;
}
void dfs(ll x, ll y, ll as){
	if(a[x][y] == 'T'){
		ans = min(ans, as);
		return;
	}
	for(int i = 0;i < 4;i++){
		ll nx = x + dx[i];
		ll ny = y + dy[i];
		if(check(nx, ny)){
			vst[nx][ny] = true;
			if(a[nx][ny] == 'E' || a[nx][ny] == 'T'){
				dfs(nx, ny, as + 1);
			}
			if(a[nx][ny] == 'B'){
				dfs(nx, ny, as + 2);
			}
			vst[nx][ny] = false;
		}
	}
}
int main(){
	cin >> n >> m;
	for(ll i = 1;i <= n;i++){
		for(ll j = 1;j <= m;j++){
			cin >> a[i][j];
			if(a[i][j] == 'Y'){
				yx = i, yy = j;
			}
			if(a[i][j] == 'T'){
				tx = i, ty = j;
			}
		}
	}
	vst[yx][yy] = true;
	dfs(yx, yy, 0);
	cout << ans;
	return 0;
}
