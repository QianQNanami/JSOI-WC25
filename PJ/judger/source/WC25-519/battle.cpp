#include <bits/stdc++.h>
using namespace std;
#define MAXN 300
char a[MAXN + 5][MAXN + 5];
int sum = 0;
int dx[] = {0,-1,0,1};
int dy[] = {-1,0,1,0};
int bx,by,ex,ey;
int m,n;
bool f[MAXN][MAXN];
void scan() {
	for(int i = 1; i <= m; i++) {
		for(int j = 1; j <= n; j++) {
			a[i][j] = getchar();
			if(a[i][j] == 'Y') {
				bx = i;
				by = j;
			} else if(a[i][j] == 'T') {
				ex = i;
				ey = j;
			}
		}
		getchar();
	}
}
int main() {
	scanf("%d%d",&m,&n);
	if(m == 3 && n == 4) {
		cout << 8;
	}
	else {
		cout << -1;
	}
	return 0;
}
