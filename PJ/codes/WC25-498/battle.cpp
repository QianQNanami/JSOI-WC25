#include<bits/stdc++.h>
using namespace std;
int n, m, px, py, mx, my;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
char a[305][305];
struct node {
	int x, y, num;
} _,__;
queue < node > c;
int main() {
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> a[i][j];
			if (a[i][j] == 'Y') px = i, py = j;
			if (a[i][j] == 'R') a[i][j] = 'S';
		}
	}
	_.x=px, _.y=py, _.num=0;
	c.push(_);
	while (!c.empty()) {
		__ = c.front(), c.pop();
		int x = __.x, y = __.y, num = __.num;
		a[x][y] = 'S';
		for(int i = 0; i < 4; i++) {
			if (a[x+dx[i]][y+dy[i]] == 'E') {
				_.x = x+dx[i], _.y = y+dy[i], _.num = num+1;
				c.push(_);
			}
			if (a[x+dx[i]][y+dy[i]] == 'B') {
				a[x+dx[i]][y+dy[i]] = 'E';
				_.x = x, _.y = y, _.num = num+1;
				c.push(_);
			}
			if (a[x+dx[i]][y+dy[i]] == 'T') {
				cout << num+1;
				return 0;
			}
		}
	}
	cout << -1;
	return 0;
}

