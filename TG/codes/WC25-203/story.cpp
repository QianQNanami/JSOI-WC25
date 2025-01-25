#include<bits/stdc++.h>
using namespace std;
const int N=50005;
int n,k,m;
int a[N];

int main()
{
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	scanf("%d%d%d",&n,&k,&m);
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=m;i++)
	{
		int t,p,v;
		scanf("%d",&t);
		if(t==1)
		{
			scanf("%d%d",&p,&v);
			a[p]=v;
		}
		else
		{
			int cnt[N],sum=0,ans=0x3f3f3f3f;
			memset(cnt,0,sizeof(cnt));
			queue<int>q;
			for(int j=1;j<=n;j++)
			{
				while(!q.empty()&&cnt[q.front()]>=2)
					{cnt[q.front()]--;q.pop();}
				q.push(a[j]);
				cnt[a[j]]++;
				if(cnt[a[j]]==1)sum++;
				if(sum==k)ans=min(ans,int(q.size()));
			}
			if(ans!=0x3f3f3f3f) printf("%d\n",ans);
			else printf("-1\n");
		}
	}
	return 0;
}
/*
4 3 5
2 3 1 2
2
1 3 3
2
1 1 1
2
//void build(int add,int l,int r)
//{
//	tree[add].l=l,tree[add].r=r;
//	if(l==r)
//	{
//		tree[add].data=(1<<a[l]);
//		return;
//	}
//	int mid=(l+r)/2;
//	build(add*2,l,mid);
//	build(add*2+1,mid+1,r);
//	tree[add].data=tree[add*2].data&tree[add*2+1].data;
//}
//build(1,1,n);
6 3 6
1 2 3 2 1 1
2
1 2 1
2
1 4 1
1 6 2
2
*/
