#include <iostream>
#include <cmath>
using namespace std;
int m, n, a[505][505], D,
hx[250005], hy[250005], h, i1, i2;
bool v[505][505];
const int dx[] = {-1, 0, 1, 0},
dy[] = {0, 1, 0, -1};
int dfs(int x, int y, int d) {
//	int nd = INT_MAX;
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[i], ny = y + dy[i];
//		if (1 <= nx && nx <= m
//		&& 1 <= ny && ny <= n
//		&& !v[nx][ny]) {
//			v[nx][ny] = true;
//			if (nx == hx[i2]
//			&& ny == hy[i2]) {
//				return 
//			abs(a[x][y] - a[nx][ny]);
//			}
//			nd = min(nd, dfs(nx, ny,
//			max(d, abs(a[x][y] - a[nx][ny])
//			)));
//			cout << nd << endl;
//			v[nx][ny] = false;
//		}
//	}
//	return nd;
	if (x == hx[i2]
	&& y == hy[i2]) {
		return d;
	}
	int nd = INT_MAX;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i], ny = y + dy[i];
		if (1 <= nx && nx <= m
		&& 1 <= ny && ny <= n
		&& !v[nx][ny]) {
			v[nx][ny] = true;
			int dt = abs(a[x][y]
			- a[nx][ny]);
			int p = dfs(nx, ny, max(d, dt));
			nd = min(nd, p);
//			cout << p;
			v[nx][ny] = false;
		}
	}
	return max(d, nd);
}
int main() {
	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	int b;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> b;
			if (b == 1)
				h++, hx[h] = i, hy[h] = j;
		}
	}
	for (i1 = 2; i1 <= h; i1++) {
		for (i2 = 1; i2 < i1; i2++) {
			v[hx[i1]][hy[i1]] = true;
			D = max(D,
			dfs(hx[i1], hy[i1], 0));
			v[hx[i1]][hy[i1]] = false;
		}
	}
	cout << D;
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

1 2
1 114514
1 1


26-5=21
*/
