#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 400;
int n,a[N + 5][N + 5],v1[2 * N + 5][N + 5],v2[2 * N + 5][N + 5],ans;
signed main(){
	freopen("matrix.in","r",stdin);
freopen("matrix.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 2;i <= 2 * n;i++){
		int y = max((int)1,i - n);
		int x = i - y;
		while(x >= 1 && y <= n){
			v1[i][x] = v1[i][x + 1] + a[x][y];
			x--;
			y++;
		}
	}
	for(int i = 1;i <= 2 * n - 1;i++){
		int y = 1 + max((int)0,n - i);
		int x = 1 + max((int)0,i - n);
		while(x <= n && y <= n){
			v2[i][x] = v2[i][x - 1] + a[x][y];
			x++;
			y++;
		}
	}
	for(int i = 2;i <= n;i++){
		for(int j = 1;j + i - 1 <= n;j++){
			for(int k = 1;k + i - 1 <= n;k++){
				int t1 = v1[j + k + i - 1][j] - v1[j + k + i - 1][j + i];
				int t2 = v2[j + n - k][j + i - 1] - v2[j + n - k][j - 1];
				ans = max(ans,t2 - t1);
			}
		}
	}
	cout << ans << endl;
    return 0;
}

