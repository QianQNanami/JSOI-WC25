#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll N = 500, M = 1e9;
const int dx[] = {1, 0, -1, 0};
const int dy[] = {0, 1, 0, -1};
ll n, m, v, xt, yt, a[N + 5][N + 5], anst, ans;
pair<ll, ll> p[N * N + 5];
bool s[N + 5][N + 5], vst[N + 5][N + 5];
struct Node{
	ll x, y, as;
};
queue<Node> q;
bool check(ll x, ll y){
	if(vst[x][y]){
		return false;
	}
	if(x < 1 || y < 1 || x > n || y > m){
		return false;
	}
	return true;
}
void bfs(ll x, ll y, ll as){
	if(x == xt && y == yt){
		anst = min(anst, as);
		return;
	}
	for(int i = 0;i < 4;i++){
		ll nx = x + dx[i];
		ll ny = y + dy[i];
		if(check(nx, ny)){
			ll h = max(as, abs(a[x][y] - a[nx][ny]));
			q.push({nx, ny, h});
		}
	}
	while(!q.empty()){
		Node g = q.front(); q.pop();
		vst[g.x][g.y] = true;
		bfs(g.x, g.y, g.as);
		vst[g.x][g.y] = false;
	}
}
int main(){
	cin >> n >> m;
	for(ll i = 1;i <= n;i++){
		for(ll j = 1;j <= m;j++){
			cin >> a[i][j];
		}
	}
	for(ll i = 1;i <= n;i++){
		for(ll j = 1;j <= m;j++){
			cin >> s[i][j];
			if(s[i][j]){
				v++;
				p[v].first = i, p[v].second = j;
			}
		}
	}
	for(ll i = 2;i <= v;i++){
		memset(vst, false, sizeof(vst));
		anst = M + 5;
		xt = p[i].first, yt = p[i].second;
		vst[p[1].first][p[1].second] = true;
		bfs(p[1].first, p[1].second, 0);
		ans = max(ans, anst);
	}
	cout << ans;
	return 0;
}
