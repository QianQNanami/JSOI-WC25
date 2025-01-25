//≤ª «£¨’‚…∂∞° 
#include <bits/stdc++.h>


using namespace std;
int n,k,m,data[50003];
int opt,p,v;

deque<int> deq;


int query()
{
	int ans=50002,st=0;
	while(!deq.empty())deq.pop_front();
	for(int i=1;i<=n;i++)
	{
		while(!deq.empty() && data[deq.front()]==data[i])deq.pop_front();
		deq.push_back(i);
		st|=data[i];
		if(st==(1<<(k+1)-1))ans=min(ans,int(deq.size()));
	}
	return ans;
}

int main()
{
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	scanf("%d%d%d",&n,&k,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",data+i);
		data[i]=1<<data[i];
	}
	while(m--)
	{
		scanf("%d",&opt);
		if(opt&1)
		{
			scanf("%d%d",p,v);
			data[p]=1<<v;
		}
		else
		{
			printf("%d\n",query());
		}
	}
	return 0;
}
