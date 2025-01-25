#include<bits/stdc++.h>
using namespace std;

queue<int> q;
int own[31];

int che(int k,int n,int a[])
{
	int minn=INT_MAX;
	int t=0;
	
	for(int i=1;i<=n;i++)
	{
		q.push(a[i]);
		if(!own[a[i]])
		{
			t++;
		}
		own[a[i]]++;
		if(t==k)
		{
			while(t>=k)
			{
				if(q.size()<minn)
				{
					minn=q.size();
				}
				int w=q.front();
				q.pop();
				own[w]--;
				if(!own[w])
				{
					t--;
				}
			}
		}
	}
	if(minn==INT_MAX)
	{
		return -1;
	}
	return minn;
}

int main()
{
	freopen("story.in","r",stdin);
	freopen(" story.out","w",stdout);
	
	int n=0;
	int k=0;
	int m=0;
	bool f1=false;
	
	
	scanf("%d %d %d",&n,&k,&m);
	int a[n+1]={};
	
	if(n<k)
	{
		f1=true;
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<m;i++)
	{
		int cla=0;
		
		scanf("%d",&cla);
		if(cla==1)
		{
			int p=0;
			int v=0;
			
			scanf("%d %d",&p,&v);
			a[p]=v;
		}
		else
		{
			if(f1)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",che(k,n,a));
				memset(own,0,sizeof(own));
				while(!q.empty())
				{
					q.pop();
				}
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
