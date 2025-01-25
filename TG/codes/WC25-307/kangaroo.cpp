#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAX = 5e4 + 5;
int n, ans, a[MAX];
priority_queue <int> beg;
bool cmp(int a, int b)
{
    return a > b;
}
signed main()
{
    freopen("kangaroo.in", "r", stdin);
    freopen("kangaroo.out", "w", stdout);
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        beg.push(a[i]);
        a[i] *= 2;
    }
    sort(a, a + n, cmp);
    for(int i = 0; i < n; i++) {
        if(beg.top() >= a[i]) {
            ans ++;
            beg.pop();
        }
    }
    cout << ans;
    return 0;
}
