#include <bits/stdc++.h>

#define int long long
#define pll pair<int, int>
#define fi first
#define se second
#define rep(i, s, t, st) for (int i = s, __##i = t; i <= __##i; i += st)
#define per(i, s, t, st) for (int i = s, __##i = t; i >= __##i; i -= st)
#define clr(dst) memset(dst, 0, sizeof(dst))
#define dataset(dst, val) memset(dst, val, sizeof(dst))
#define min Min
#define max Max
#define abs Abs
#define gc getchar()
#define pc putchar
#define INF 0x7f7f7f7f7f7f7f7fLL
#define INF_UNIT 0x7f
#define ULM 0xffffffffffffffffLL
#define ULM_UNIT 0xff
#define rand Rand

inline int read()
{
  int x = 0, f = 1;
  char ch = gc;
  while (!isdigit(ch))
  {
    if (ch == '-')
      f = -f;
    ch = gc;
  }
  while (isdigit(ch))
  {
    x = (x << 1) + (x << 3) + (ch ^ 48);
    ch = gc;
  }
  return x * f;
}
inline void write(int x)
{
  if (x < 0)
    pc('-'), x = -x;
  if (x / 10)
    write(x / 10);
  pc(x % 10 + '0');
}
inline void writeln(int x)
{
  write(x);
  pc('\n');
}
template <typename T>
inline T Abs(T x) { return x < 0 ? -x : x; }
template <typename T, typename TT>
inline T Min(T x, TT y) { return x < y ? x : y; }
template <typename T, typename TT>
inline T Max(T x, TT y) { return x > y ? x : y; }

using namespace std;

const int MAXN = 410;

int n;
int a[MAXN][MAXN];
int s1[MAXN][MAXN], s2[MAXN][MAXN];
int ans;

signed main()
{
  freopen("matrix.in", "r", stdin);
  freopen("matrix.out", "w", stdout);
  n = read();
  rep(i, 1, n, 1) rep(j, 1, n, 1) a[i][j] = read();
  rep(i, 1, n, 1) s1[1][i] = s2[1][i] = a[1][i], s1[i][1] = a[i][1], s2[i][n] = a[i][n];
  rep(i, 2, n, 1) rep(j, 2, n, 1) s1[i][j] = s1[i - 1][j - 1] + a[i][j];
  rep(i, 2, n, 1) per(j, n - 1, 1, 1) s2[i][j] = s2[i - 1][j + 1] + a[i][j];
  rep(i, 1, n - 1, 1)
    rep(j, 1, n - 1, 1)
      rep(len, 2, n - max(i, j) + 1, 1)
      {
        int x = i + len - 1, y = j + len - 1;
        ans = max(ans, s1[x][y] - s1[i - 1][j - 1] - s2[x][j] + s2[i - 1][y + 1]);
      }
  writeln(ans);
  return 0;
}

