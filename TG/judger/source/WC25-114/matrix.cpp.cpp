#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 405, oo = 0x3f3f3f3f3f3f3f3f;
int a[N][N], b[N][N];
pair < int , int > f[N][N];
signed main(){
	freopen("matrix.in", "r", stdin);
	freopen("matrix.out", "w", stdout);

	int n;
	cin >> n;
	for(int i = 1; i <= n; i ++)
		for(int j = 1; j <= n; j ++) cin >> a[i][j];
	
	for(int i = 1; i <= n; i ++){
		f[i][1].first = a[i][1];
		f[i][1].second = a[i][1];
		for(int j = 1; j <= n; j ++){
			if(j == 1){
				f[i][j].first = a[i][1];
				f[i][j].second = f[i - 1][j + 1].second + a[i][j];
				continue;
			}
			if(j == n){
				f[i][j].first = f[i - 1][j - 1].first + a[i][j];
				f[i][j].second = a[i][n];
				continue;
			}
			f[i][j].first  =  f[i - 1][j - 1].first + a[i][j];
			f[i][j].second = f[i - 1][j + 1].second + a[i][j];
		}
	}
	for(int i = 1; i <= n; i ++){
		for(int j = 1; j <= n; j ++) cout << f[i][j].first << ',' << f[i][j].second << ' ';
		cout << endl;
	}
	/*
	for(int i = 1; i <= n; i ++){
		for(int j = 1; j <= n; j ++){
			if(i == 1 || j == 1 || j == n) b[i][j] = -oo;
			else b[i][j] = f[i][j].first - f[i][j].second;
			cout << b[i][j] << ' ';
		}
		cout << endl;
	}
	*/
	int ans = -oo;
	for(int x1 = 2; x1 <= n; x1 ++){
		for(int y1 = 2; y1 <= n; y1 ++){
			for(int x2 = 2; x2 <= n; x2 ++){
				if(x1 <= y1)
				for(int y2 = 1; y2 < n; y2 ++){
					ans = max(ans, f[x1][y1].first - f[x2][y2].second);
				}
			}
		}
	}
	
	cout << ans;
	
	
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}


/*
3
-3 4 5
7 9 -2
1 0 -6
*/
