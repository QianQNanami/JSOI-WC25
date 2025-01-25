#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int n;
int a[N];
vector<int> v[N];
queue<int> q;
int root;
long long sum;
struct Node
{
	int x,y;
}E[N];
int tot;
int vis[N];
int bfs(int p,int x,int y)
{
	int ans=0;
	q.push(p);
	memset(vis,0,sizeof(vis));
	vis[p]=1;
	vis[x]=vis[y]=1;
	while(!q.empty())
	{
		int x=q.front();
		ans+=a[x];
		q.pop();
		for(int son:v[x])
		{
			if(!vis[son]) 
			{
				q.push(son);
				vis[son]=1;
			}
		}
	}
	return ans;
}
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	
	
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x,f;
		scanf("%d%d",&x,&f);
		a[i]=x;
		if(f==0) root=i;
		else 
		{
			v[f].push_back(i);
			E[++tot].x=i;
			E[tot].y=f;
		}
	}
	
	for(int i=1;i<=tot;i++)
	{
		for(int j=1;j<i;j++)
		{
			int u1=0,u2=0,u3=0;
			if(E[i].x!=E[j].x&&E[i].x!=E[j].y) u1=E[i].x;
			else u1=E[i].y,u2=E[i].x;
			if(E[j].x!=E[i].x&&E[j].x!=E[i].y) u3=E[j].x;
			else u3=E[j].y,u2=E[j].x;
			if(!u2) u2=E[i].y;
			if(bfs(u1,u2,0)==bfs(u2,u1,u3)&&bfs(u2,u1,u3)==bfs(u3,u2,0)) sum++;
//			cout<<bfs(u1,u2)<<" "<<bfs(u2,u1,u3)<<" "<<bfs(u3,u2)<<endl;
		}
	}
	printf("%lld",sum);
	return 0;
}

