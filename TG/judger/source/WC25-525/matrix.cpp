#include <bits/stdc++.h>
#define int long long
using namespace std;

template<typename T>
T read(T x){
    T opt = 1, sum = 0;
    char ch = getchar();
    while(!isdigit(ch)) opt = (ch == '-') ? -1 : 1, ch = getchar();
    while( isdigit(ch)) sum = (sum << 1) + (sum << 3) + (ch ^ 48), ch = getchar();
    return opt * sum;
}
#define read read(0ll)

const int N = 505;
map<pair<int, int>, int> mp, mp1;
int a[N][N];
int sum[N][N], sum1[N][N];
int ans = INT_MIN;
signed main()
{
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
	int n = read;
	for(int i = 1;i <= n;i ++ ){
		for(int j = 1;j <= n;j ++ ){
			cin >> a[i][j];
		}
	}
	for(int i = 1;i < n;i ++ ){
		int x = i, y = 1;
		int cnt = 0;
		while(x >= 1 && x <= n && y >= 1 && y <= n){
			sum[x - y][++cnt] = sum[x - y][cnt - 1] + a[x][y];
			mp[{x, y}] = cnt;
			x ++ , y ++;
		}
	}
	for(int j = 2;j <= n;j ++){
		int x = 1, y = j;
		int cnt = 0;
		while(x >= 1 && x <= n && y >= 1 && y <= n){
			sum[x - y + n + n][++cnt] = sum[x - y + n + n][cnt - 1] +a[x][y];
			mp[{x, y}] = cnt;
			x ++ , y ++;
		}
	}
	for(int i = 1;i < n;i ++ ){
		int x = i, y = n;
		int cnt = 0;
		while(x >= 1 && x <= n && y >= 1 && y <= n){
			sum1[x + y][++cnt] = sum1[x + y][cnt - 1] + a[x][y];
			mp1[{x, y}] = cnt;
			x ++ , y -- ;
		}
	}
	for(int j = 2;j <= n;j ++){
		int x = 1, y = j;
		int cnt = 0;
		while(x >= 1 && x <= n && y >= 1 && y <= n){
			sum1[x + y + n + n][++cnt] = sum1[x + y + n + n][cnt - 1] + a[x][y];
			mp1[{x, y}] = cnt;
			x ++ , y -- ;
		}
	}
	for(int x = 1;x < n;x ++ ){
		for(int y = 1;y < n;y ++ ){
			for(int k = 2;k <= n;k ++ )
			{
			 	int xx = x + k - 1, yy = y + k - 1;
				if(xx >= 1 && xx <= n && yy >= 1 && yy <= n){
					int Sum1;
					if(x - y >= 0){
						Sum1 = sum[x - y][mp[{xx, yy}]] - sum[x - y][mp[{x, y}] - 1];
					}
					else {
						Sum1 = sum[x - y + n + n][mp[{xx, yy}]] - sum[x - y + n + n][mp[{x, y}] - 1];
					
					}
					int Sum2;
					if(x + y < n + 1){
						Sum2 = sum1[xx + y + n + n][mp1[{xx, y}]] - sum1[xx + y + n + n][mp1[{x, yy}] - 1];
					}
					else {
							Sum2 = sum1[xx + y ][mp1[{xx, y}]] - sum1[xx + y ][mp1[{x, yy}] - 1];
					}
//					cout << sum1[x + y ][mp1[{xx, y}]] << endl;
					ans = max(Sum1 - Sum2, ans);
				} 
			} 
		}
	}
	cout << ans << endl;
    return 0;
}

/*
2
1 -2
4 5
*/
