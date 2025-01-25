#include<bits/stdc++.h>
using namespace std;
int n,a[100010],st[100010],fa[100010],all,e;
vector<int> q[100010];
int dfs(int x,int cnt)
{
	if(cnt == all / 3)
	{
		return 1;
	}
	if(cnt > all / 3)
	{
		return 0;
	}
	dfs(fa[x],cnt + a[fa[x]]);
}
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>n;
	for(int i = 1;i <= n;i++)
	{
		int v,p;
		cin>>v>>p;
		fa[i] = p;
		q[v].push_back(i);
		fa[i] = v;
		a[i] = v;
		all += v;
	}
	if(all % 3 != 0)
	{
		cout<<0;
		return 0;
	}
	for(int i = 1;i <= n;i++)
	{
		if(q[i].size() == 0)
		{
			st[++e] = i;
		}
	}
	if(e == 1)
	{
		int leaf = st[1];
		if(dfs(leaf,a[leaf]))
		{
			cout<<1;
		}
		else
		{
			cout<<0;
		}
		return 0;
	}
	return 0;
}

