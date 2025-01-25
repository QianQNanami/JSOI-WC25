#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 405;
inline int read() {
    int x = 0, f = 1;
    char c = getchar();
    while (c < '0' || c > '9') {if (c == '-') f = -1; c = getchar();}
    while (c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
    return x * f;
}
int n, ans = -0x3f3f3f;
int a[N][N], dp[N][N], sumz[N][N], sumf[N][N];
inline void init() {
    for (int i = 1; i <= n; i++) sumz[i][1] = a[i][1], sumf[i][n] = a[i][n], sumz[1][i] = sumf[1][i] = a[1][i];
    for (int i = 2; i <= n; i++)
        for (int j = 2; j <= n; j++)
            sumz[i][j] = sumz[i-1][j-1] + a[i][j];
    for (int i = 2; i <= n; i++)
        for (int j = n - 1; j >= 1; j--)
            sumf[i][j] = sumf[i-1][j+1] + a[i][j];
}
inline int delay(int i, int j, int k) {
    return (sumz[i][j] - sumz[i-k][j-k]) - (sumf[i][j-k+1] - sumf[i-k][j+1]);
}
signed main(void) {
    freopen("matrix.in", "r", stdin);
    freopen("matrix.out", "w", stdout);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    n = read();
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            a[i][j] = read();
        }
    }
    init();
    //for (int i = 1; i <= n; i++,cout<<'\n') for (int j = 1; j <= n; j++) cout << sumf[i][j] << " ";
    /*
    dp[2][2] = a[1][1] + a[2][2] - a[1][2] - a[2][1];
    */
    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= n; j++){
            int mini = min(i, j);
            for (int k = 2; k <= mini; k++) {
                int cnt = delay(i, j, k);
                ans = max(cnt, ans);
            }
        }
    }

    //cout << delay(2, 2, 2) << endl;
    cout << ans << '\n';
    return 0;
}
