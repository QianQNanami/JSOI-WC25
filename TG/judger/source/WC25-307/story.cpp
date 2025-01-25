#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAX = 1e4 + 5;
int n, k, m, a[MAX], dp[MAX][MAX];
signed main()
{
    freopen("story.in", "r", stdin);
    freopen("story.out", "w", stdout);
    cin >> n >> k >> m;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int l = 1; l <= m; l++) {
        int qp;
        cin >> qp;
        if(qp == 1) {
            int p, v;
            cin >> p >> v;
            a[p] = v;
        }
        else {
            memset(dp, 0, sizeof(dp));
            dp[1][a[1]] = 1;
            dp[1][0] = 1;//length
            if(a[1] <= k) dp[1][k + 1]++;//size
            for(int i = 2; i <= n; i++) {
                for(int j = 1; j <= k; j++)
                    dp[i][j] = dp[i - 1][j];
                dp[i][a[i]] = 1;
                dp[i][0] = dp[i - 1][0] + 1;
                if(a[i] <= k) dp[i][k + 1]++;
                if(dp[i - 1][0] - dp[i - 1][k + 1] * k >= dp[i][0] - dp[i][k + 1]) {
                    memset(dp[i], 0, sizeof(dp[i]));
                    dp[i][a[i]] = 1;
                    dp[i][0] = 1;
                    if(a[i] <= k) dp[i][k + 1]++;
                }
            }
            int ans = -1;
            for(int i = 1; i <= n; i++)
                if(dp[i][k + 1] == k)
                    ans = min(ans, dp[i][0]);
            cout << ans << endl;
        }
    }
    return 0;
}
