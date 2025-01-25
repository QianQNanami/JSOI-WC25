#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 400;
int n,t[N + 5],tot,a[N + 5][N + 5];
signed main(){
	freopen ("matrix.in","r",stdin);
	freopen ("matrix.out","w",stdout);
	cin >> n;
	for (int i = 1;i <= n;i ++)
		for (int j = 1;j <= n;j ++)
			cin >> a[i][j];
	for (int i = 1;i <= n;i ++){
		for (int j = 1;j <= n;j ++){
			int sum1 = 0,sum2 = 0;
			for (int k = i;k <= n;k ++){
				for(int p = j;p <= n;p ++){
					if (k - i == p - j){
						if (min(n - k,n - p) == abs(p - k)) sum1 += a[k][p];
						if (p + k == min(n + k,n + p)) sum2 += a[k][p];
					}
				}
			}
			t[++ tot] = sum1 - sum2;
		}
	}
	sort (t + 1,t + 1 + tot);
	cout << t[tot] << endl;
	return 0;
}
/*
2 
1 -2
4 5

3
1 2 3
4 5 6
7 8 9

3
-3 4 5 
7 9 -2 
1 0 -6
*/ 
