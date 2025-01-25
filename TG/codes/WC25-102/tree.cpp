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

const int MAXN = 1e5 + 10;

int n, a[MAXN];
vector<int> g[MAXN];
int s[MAXN], cnt[MAXN];
int ans = 0, sum = 0, k;
void dfs(int u, int fa)
{
  s[u] = a[u];
  for (auto &&v : g[u])
  {
    if (v == fa)
      continue;
    dfs(v, u);
    s[u] += s[v];
  }
}
void dfs3(int u, int fa)
{
  if (s[u] == k)
    cnt[u] = 1;
  for (auto &&v : g[u])
  {
    if (v == fa)
      continue;
    dfs(v, u);
    cnt[u] += cnt[v];
  }
}
void getans(int u)
{
  clr(cnt);
  dfs3(u, 0);
  int x = 1;
  for (auto &&v : g[u])
    x *= cnt[v];
  ans += x;
}
void dfs2(int u, int fa)
{
  for (auto &&v : g[u])
  {
    if (v == fa)
      continue;
    s[u] -= s[v];
    s[v] += s[u];
    getans(v);
    dfs2(v, u);
    s[v] -= s[u];
    s[u] += s[v];
  }
}

signed main()
{
  freopen("tree.in", "r", stdin);
  freopen("tree.out", "w", stdout);
  n = read();
  rep(i, 1, n, 1)
  {
    a[i] = read();
    sum += a[i];
    int v = read();
    if (v)
      g[i].push_back(v), g[v].push_back(i);
  }
  if (sum % 3)
  {
    writeln(0);
    return 0;
  }
  k = sum / 3;
  dfs(1, 0);
  getans(1);
  dfs2(1, 0);
  writeln(ans);
  return 0;
}

