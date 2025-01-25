#include<bits/stdc++.h>
using namespace std;
const int N=100005;
int n;
int sum;
int w[N],p[N];
vector<int>v[N];
int f[N],cnt[N];

void dfs(int add,int fa)
{
	int ans=0;
	for(auto u:v[add])
		if(u!=fa)
		{
			dfs(u,add);
			ans+=cnt[u]*cnt[add];
			cnt[add]+=cnt[u];
			w[add]+=w[u];
			f[add]+=f[u];
		}
	f[add]+=ans;
	if(w[add]==2*(sum/3))f[add]+=cnt[add];
	if(w[add]==sum/3)cnt[add]++;
}

int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&w[i],&p[i]);
		sum+=w[i]; 
		v[p[i]].push_back(i);
	}
	if(sum%3!=0)
		printf("0\n");
	else
	{
		dfs(0,0);
		printf("%d\n",f[v[0][0]]);
	}
	return 0;
}
