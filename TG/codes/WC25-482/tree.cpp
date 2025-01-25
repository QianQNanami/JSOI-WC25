#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5 + 100;
int n;
int v[N],a[N];
struct e{
	int nxt,v;
}edge[N*4];
int head[N],cnt;
void add(int u,int v)
{
	edge[++cnt].nxt=head[u];
	edge[cnt].v=v;
	head[u]=cnt;
}
int siz[N],ans;
void dfs(int u,int fa)
{
	siz[u]=v[u];
	for(int i=head[u];i;i=edge[i].nxt)
	{
		int v=edge[i].v;
		if(v==fa) continue;
		dfs(v,u);
		siz[u]+=siz[v];
	}
}
void found()
{
	for(int i=1;i<=n;i++)
	{
		if(siz[i]==siz[0]/3)
			ans++;
	}
}
signed main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>v[i]>>a[i];
	for(int i=1;i<=n;i++)
	{
		add(i,a[i]);
		add(a[i],i);
	}
	dfs(0,114514);
	found();
	cout<<ans<<endl;
	return 0;
}
