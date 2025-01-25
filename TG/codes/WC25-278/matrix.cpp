#include <bits/stdc++.h>
using namespace std;
int a[410][410], n;
int x1[410][410], x2[410][410];
int maxn = -999999;
int main(){
	freopen("matrix.in", "r", stdin);
	freopen("matrix.out", "w", stdout);
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++){
			scanf("%d", &a[i][j]);
			x1[i][j] = x1[i - 1][j - 1] + a[i][j];
			x2[i][j] = x2[i - 1][j + 1] + a[i][j];
		}
	for(int m = 2; m <= n; m++)
		for(int i = m; i <= n; i++)
			for(int j = m; j <= n; j++){
				int cnt = (x1[i][j] - x1[i - m][j - m]) - (x2[i][j + 1 - m] - x2[i - m][j - 1 + m]) ;
				maxn = max(maxn, cnt);
			}
	printf("%d", maxn);
	return 0;
}
