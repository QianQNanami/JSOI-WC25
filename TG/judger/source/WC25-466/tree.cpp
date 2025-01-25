#include<bits/stdc++.h>
using namespace std;

int n;
int w[100009];
long long sumw[100009];
vector<int> G[100009];
int fa[100009];
long long num1[100009];
long long ans[100009];
int gen,he;

void dfs(int u)
{
	//cout<<u<<endl;
	long long sum=0,phe=0;
	sumw[u]=w[u];
	for(int i=0;i<G[u].size();i++)
	{
		dfs(G[u][i]);
		sum+=num1[G[u][i]];
		phe+=num1[G[u][i]]*num1[G[u][i]];
		sumw[u]+=sumw[G[u][i]];
	}
	ans[u]+=(sum*sum-phe)/2; // 1
	num1[u]+=sum;
	
	if(sumw[u]==he*2&&u!=gen)
	{
		ans[u]+=num1[u];
	}
	if(sumw[u]==he)
	{
		num1[u]++;
	}
	return;
}

int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	ios::sync_with_stdio(0);
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>w[i]>>fa[i];
		he+=w[i];
		if(fa[i]==0)gen=i;
		G[fa[i]].push_back(i);
	}
	if(he%3!=0)
	{
		cout<<0;
		return 0;
	}
	he/=3;
	dfs(gen);
	long long anss=0;
	for(int i=1;i<=n;i++)
	{
		anss+=ans[i];
	}
	cout<<anss; 
	return 0;
}
/*
3
1 0
1 1
1 2
*/
