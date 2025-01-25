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
#define FILENA "kangaroo"
// const int N

template<class T>
using minheap = priority_queue<T, vector<T>, greater<>>;
template<class T>
using maxheap = priority_queue<T, vector<T>, less<>>;

const int N = 5e4 + 5;

int n, a[N], ans, all;
int que[N], head, back = -1;

signed main() {
#ifdef FILEIO
    freopen(FILENA".in", "r", stdin);
    freopen(FILENA".out", "w", stdout);
#endif

    read(n);
    all = n;
    lop (i, 1, n) {
        read(a[i]);
    }
    sort(a + 1, a + n + 1);
    ril (i, n, 1) {
        // write(i), tab;
        // lop (j, 1, n) write(a[j]), tab;
        if (a[i] == 0) {
            // endl;
            continue;
        }
        int idx = lower_bound(a + i, a + all + 1, a[i] << 1) - a;
        while (a[idx + 1]) idx++;
        if (a[idx] >= a[i] << 1 && a[idx] != -1) {
            ans++;
            a[idx] = 0;
            all--;
            // write(idx);
        }

        // endl;
    }
    write(ans), endl;

#ifdef FILEIO
    fclose(stdin);
    fclose(stdout);
#endif
    return 0;
}