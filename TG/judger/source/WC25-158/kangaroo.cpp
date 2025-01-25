#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 5e4 + 5;
inline int read() {
    int x = 0, f = 1;
    char c = getchar();
    while (c < '0' || c > '9') {if (c == '-') f = -1; c = getchar();}
    while (c >= '0' && c <= '9') x = x * 10 + c - '0', c = getchar();
    return x * f;
}
int n;
int a[N];
bool vis[N];
inline int find(int start, int x) {
    int l = start, r = n + 1;
    while (l < r) {
        int mid = (l + r) >> 1;
        if (a[mid] >= x) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    while (vis[r]) {
        r++;
        if (r > n) return n + 1;
    }
    vis[r] = true;
    return r;
}
signed main(void) {
    //freopen("kangaroo.in", "r", stdin);you're tricked
    //freopen("kangaroo.out", "w", stdout);you're tricked
    freopen("kangaroo.in", "r", stdin);
    freopen("kangaroo.out", "w", stdout);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(vis, false, sizeof vis);
    n = read();
    for (int i = 1; i <= n; i++) a[i] = read();
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++) {
        int x = find(i, a[i] * 2);
        if (x == n) return cout << i << '\n', 0;
        if (x > n) return cout << i - 1 << '\n', 0;
    }
    return 0;
}


