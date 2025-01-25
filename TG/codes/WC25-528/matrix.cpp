#include <bits/stdc++.h>
using namespace std;
int n;
const int N = 4e2 + 10;
int a[N][N];
int dp[N][N];
int main(){
    freopen("matrix.in", "r", stdin);
    freopen("matrix.out", "w", stdout);
    cin >> n;
    for(int i = 1;i <= n; i++){
        for(int j = 1;j <= n; j++){
            cin >> a[i][j];
        }
    }
    memset(dp, -0x3f, sizeof(dp));
    int ans = -0x3f;
    for(int i = 2;i <= n; i++){
        for(int j = 2;j <= n; j++){
            for(int k = 1;k < min(i, j); k++){
                int x = i - k, y = j - k;
                dp[i][j] = max(dp[i][j], a[i][j] + a[x][y] - a[i][y] - a[x][j]);
            }
            ans = max(ans, dp[i][j]);
        }
    }
    cout << ans << endl;
    return 0;
}