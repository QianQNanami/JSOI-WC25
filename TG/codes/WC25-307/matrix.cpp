#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAX = 1e3 + 5;
int n, ans = INT_MIN, a[MAX][MAX];
signed main()
{
    freopen("matrix.in", "r", stdin);
    freopen("matrix.out", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            cin >> a[i][j];
    for(int i = 1; i <= n; i++)
        ans += a[i][i];
    for(int i = 1; i <= n; i++)
        ans -= a[i][n - i];
    cout << ans << endl;
    return 0;
}
