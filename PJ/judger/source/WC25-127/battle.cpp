#include "bits/stdc++.h"
#define int long long
using namespace std;

const int D[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
int n, m, dis[305][305], q[1000001][2];
char s[305][305];

inline void bfs(int x, int y) {
	dis[x][y] = 0;
	int rear = 0, front = 1;
	q[++ rear][0] = x, q[rear][1] = y;
	while (front <= rear) {
		int a, b;
		a = q[front][0], b = q[front][1];
		for (int i = 0; i < 4; i ++) {
			int xx = a + D[i][0], yy = b + D[i][1];
			if (s[xx][yy] == 'E' && (dis[xx][yy] == 0 || dis[a][b] + 1 < dis[xx][yy])) {
				dis[xx][yy] = dis[a][b] + 1;
				q[++rear][0] = xx, q[rear][1] = yy;
			}
			if (s[xx][yy] == 'B' && (dis[xx][yy] == 0 || dis[a][b] + 2 < dis[xx][yy])) {			
				dis[xx][yy] = dis[a][b] + 2;
				q[++rear][0] = xx, q[rear][1] = yy;
			}

		}
		front ++;
	}
//	for (int i = 1; i <= n; i ++) {
//		for (int j = 1; j <= m; j ++)
//			printf("%lld ", dis[i][j]);
//		printf("\n");
//	}
}

signed main() {
	int x1, y1, x2, y2;
	scanf("%lld%lld", &n, &m);
	for (int i = 1; i <= n; i ++) {
		scanf("%s", s[i] + 1);
		for (int j = 1; j <= m; j ++) {
			if (s[i][j] == 'Y')
				x1 = i, y1 = j;
			if (s[i][j] == 'T')	
				x2 = i, y2 = j, s[i][j] = 'E';
		}
	}
//	for (int i = 1; i <= n; i ++) {
//		for (int j = 1; j <= m; j ++)
//			printf("%c ", s[i][j]);
//		printf("\n");
//	}
//	printf("%lld %lld\n%lld %lld", x1, y1, x2, y2);
	bfs(x1, y1);
	if (dis[x2][y2] == 0) printf("-1");
	else
		printf("%lld", dis[x2][y2]);
}
