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
int n, k, m;
int a[N];
signed main(void) {
    freopen("story.in", "r", stdin);
    freopen("story.out", "w", stdout);
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    n = read(), k = read(), m = read();
    for (int i = 1; i <= n; i++) a[i] = read();
    while (m--) {
        int x = read();
        if (x == 1) {
            int p = read(), v = read();

        } else {
            cout << "-1\n";
        }
    }
    return 0;
}
