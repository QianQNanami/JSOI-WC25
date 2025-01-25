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
#define FILENA "matrix"
const int N = 400 + 5;

template<class T>
using minheap = priority_queue<T, vector<T>, greater<>>;
template<class T>
using maxheap = priority_queue<T, vector<T>, less<>>;

int n;
int ma[N][N], s1[N][N], s2[N][N];
int f[N][N], ans;

inline int d1(int x, int y, int m) {
    if (x < m || y < m) return 0;
    return s1[x][y] - s1[x - m][y - m];
}
inline int d2(int x, int y, int m) {
    if (x < m || y < m) return 0;
    return s2[x - m + 1][y] - s2[x + 1][y - m];
}

signed main() {
#ifdef FILEIO
    freopen(FILENA".in", "r", stdin);
    freopen(FILENA".out", "w", stdout);
#endif

    read(n);
    lop (i, 1, n) {
        lop (j, 1, n) {
            read(ma[i][j]);
            s1[i][j] = s1[i - 1][j - 1] + ma[i][j];
        }
    }
    ril (i, n, 1) {
        lop (j, 1, n) {
            s2[i][j] = s2[i + 1][j - 1] + ma[i][j];
        }
    }
    // lop (i, 1, n) {lop (j, 1, n) {write(s1[i][j]), tab;}endl;}endl;
    // lop (i, 1, n) {lop (j, 1, n) {write(d1(i, j, 2)), tab;}endl;}endl;
    // lop (i, 1, n) {lop (j, 1, n) {write(s2[i][j]), tab;}endl;}endl;
    // lop (i, 1, n) {lop (j, 1, n) {write(d2(i, j, 2)), tab;}endl;}endl;

    /*
    d = d1 - d2
    f i,j,m = max { d i,j,m } {m <= i && m <= j}
              max { d i,j,1, d i,j,2, d i,j,3, d i,j,4, ..., d i,j,min(i,j) }
    */

    lop (i, 1, n) {
        lop (j, 1, n) {
            lop (m, 1, min(i, j)) {
                f[i][j] = max(f[i][j], d1(i, j, m) - d2(i, j, m));
            }
            ans = max(f[i][j], ans);
        }
    }
    write(ans), endl;

#ifdef FILEIO
    fclose(stdin);
    fclose(stdout);
#endif
    return 0;
}