#include<bits/stdc++.h>
using namespace std;
const int N=5e4+5;
const int inf=INT_MAX;
int a[N],vis[N],cnt;
bool flag[N];
struct node
{
	int l,r,data,id;
}t[N*4];
void build(int p,int l,int r)
{
	if(l==r)t[p].data=1,t[p].id=p;
	t[p].l=l;
	t[p].r=r;
	int mid=(l+r)/2;
	build(p*2,l,mid);
	build(p*2+1,mid+1,r);
	t[p].data=t[p*2].data+t[p*2+1].data;
}
int main()
{
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	int n,k,m;
	scanf("%d%d%d",&n,&k,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	build(1,1,n);
	for(int i=1;i<=m;i++)
	{
		int c;
		scanf("%d",&c);
		if(c==1)
		{
			int p,v;
			scanf("%d%d",&p,&v);
			a[p]=v;
		}
		else
		{
			int ans=inf;
			memset(vis,0,sizeof(vis));
			memset(flag,false,sizeof(flag));
			for(int i=1;i<=n;i++)
			{
				vis[a[i]]++;
				flag[a[i]]=true;
				vis[a[i-1]]--;
				if(!vis[a[i-1]])flag[a[i-1]]=false;
				for(int j=i+1;j<=n;j++)
				{
					if(!flag[a[j]])
					{
						flag[a[j]]=true;
						cnt++;
						cerr<<cnt<<" ";
					}
					vis[a[j]]++;
					if(cnt==k)
					{
						cnt=0;
						ans=min(ans,j-i);
						cerr<<ans<<" ";
						break;
					}
				}
			}
			if(ans!=inf)printf("%d\n",ans);
			else printf("-1\n");
		}
	}
	return 0;
}

