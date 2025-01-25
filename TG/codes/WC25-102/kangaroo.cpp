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
  int x = 0, f = 1, ch = gc;
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

const int MAXN = 5e4 + 10;

int n, a[MAXN];
int l, r;

signed main()
{
  freopen("kangaroo.in", "r", stdin);
  freopen("kangaroo.out", "w", stdout);
  n = read();
  rep(i, 1, n, 1) a[i] = read();
  sort(a + 1, a + 1 + n);
  l = 1, r = lower_bound(a + 1, a + 1 + n, a[n] >> 1) - a;
  int ans = 0;
  while (r <= n)
  {
    while (a[r] <= (a[l] << 1) && r <= n)
      r++;
    if (r <= n)
    {
      ans++;
      l++, r++;
    }
  }
  writeln(ans);
  return 0;
}

