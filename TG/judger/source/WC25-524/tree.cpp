#include <bits/stdc++.h>
// #define int long long
// #define int __int128
#define lop(n,s,e) for (int n = s; n <= e; ++n)
#define ril(n,s,e) for (int n = s; n >= e; --n)
#define nem(n,c) while (!n.empty() && (c))
namespace IO {
    template<class T>
    T &read(T &x) {
        char f = 1;
        int c = getchar();
        x = 0;
        for (; !isdigit(c); c = getchar()) if (c == 45) f = -1;
        for (;  isdigit(c); c = getchar()) x = (x << 3) + (x << 1) + (c ^ 48);
        x *= f;
        return x;
    }
    template<class T, class ...Args>
    void read(T &x, Args &...args) {
        read(x);
        read(args...);
    }
    template<class T>
    void write(T x) {
        if (x < 0) putchar(45), x = -x;
        if (x > 9) write(x / 10);
        putchar((x % 10) ^ 48);
    }
#define endl putchar(10)
#define tab putchar(9)
#define space putchar(32)
}
using namespace std;
using namespace IO;
#define FILEIO
#define FILENA "tree"
const int N = 1e5 + 5;

template<class T>
using minheap = priority_queue<T, vector<T>, greater<>>;
template<class T>
using maxheap = priority_queue<T, vector<T>, less<>>;

struct edge {
    int f, t, nxt;
};
edge g[N];
int head[N], tot, v[N], fa[N];
void add(int f, int t) {
    g[++tot].f = f;
    g[tot].t = t;
    g[tot].nxt = head[f];
    head[f] = tot;
}
#define eac(n,s) for (int n = head[s]; n; n = g[n].nxt)

int n, ans;
int tv[N];
bitset<N> is3q;
int dep[N];

void gtv(int r, int d) {
    tv[r] = v[r];
    dep[r] = d;
    eac (i, r) {
        gtv(g[i].t, d + 1);
        tv[r] += tv[g[i].t];
    }
    if (tv[r] * 3 == tv[0]) is3q[r] = true;
}

void dfs(int r) {
    eac (i, r) {
        const int c = g[i].t;
        if ((tv[0] - tv[r]) * 3 == tv[0] && tv[c] * 3 == tv[0]) {
            write(0), tab, write(r), tab, write(c), endl;
            ans++;
        }
        if (tv[c] * 3 == tv[0]) {
            eac (j, r) {
                const int cc = g[j].t;
                if (tv[cc] * 3 == tv[0] && c != cc) {
                    write(1), tab, write(r), tab, write(c), tab, write(cc), endl;
                    ans++;
                }
            }
        }
        dfs(c);
    }
}

signed main() {
#ifdef FILEIO
    freopen(FILENA".in", "r", stdin);
    freopen(FILENA".out", "w", stdout);
#endif

    read(n);
    lop (i, 1, n) {
        read(v[i], fa[i]);
        add(fa[i], i);
    }
    gtv(0, 0);
    lop (i, 1, n) {
        write(i), tab, write(tv[i]), endl;
    }
    dfs(0);
    write(ans), endl;

#ifdef FILEIO
    fclose(stdin);
    fclose(stdout);
#endif
    return 0;
}