#include<bits/stdc++.h>
using namespace std;
const int N=5e4+7;
int n,k,m;
int a[N];
int dp[N];
int Next[N];
int t[N];
void f()
{
	for(int i=n;i>=1;i--)
	{
		Next[i]=t[a[i]];
		t[a[i]]=i;
	}
}
int main()
{
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	f();
	while(m--)
	{
		int w;
		cin>>w;
		memset(t,0,sizeof(t));
		if(w==1)
		{
			int x,y;
			cin>>x>>y;
			a[x]=y;
			f();
		}
		else{
			memset(dp,0,sizeof(dp));
			int lock=0;
			for(int i=1;i<=n;i++)
			{
				if(t[a[i]]==0)
				{
					t[a[i]]=1;
				}
				if(Next[i]==0) lock=1;
				if(t[a[i]]==1&&!lock)
				{
					dp[i]=1;
				}
				else dp[i]=dp[i-1]+1;
			}
			int ans=1e8;
			for(int i=1;i<=n;i++)
			if(dp[i]>=k&&dp[i]<ans) ans=dp[i];
			if(ans==1e8) cout<<-1<<endl;else cout<<ans<<endl;
		}
	}
	return 0;
}

