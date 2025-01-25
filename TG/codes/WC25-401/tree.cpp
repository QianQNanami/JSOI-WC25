#include <iostream>
#include <queue>
using namespace std;

const int N=1e5+10;
int fa[N],v[N];
bool leaf[N];
int sum[N];
int n,ans;
queue <int> q;

bool f(int x,int y)
{
	if(x==y) return true;
	if(x==0) return false;
	return f(fa[x],y);
}

void bfs()
{
	while(leaf[0])
	{
		for(int i=1;i<=n;i++)
			if(!leaf[i])
				q.push(i);
		for(int i=1;i<=n;i++)
		{
			if(!leaf[i])
			{
				leaf[i]=1;
				leaf[fa[i]]=0;
			}
		}		
		while(!q.empty())
		{
			int i=q.front();q.pop();
			sum[fa[i]]+=sum[i];
			if(i==0) continue;
		}
	}
	
}

int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>n;leaf[0]=1;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i]>>fa[i];
		leaf[fa[i]]=1; 
		sum[i]=v[i];
	}
	bfs();	
	int k=sum[0]/3;
	if(k*3!=sum[0])
	{
		cout<<0;
		return 0;
	}
	for(int i=1;i<n;i++)
	{	
		for(int j=i+1;j<=n;j++)
		{
			if(f(i,j))
				if(sum[0]-sum[j]==sum[j]-sum[i]&&sum[j]-sum[i]==sum[i])
					ans++;
			if(f(j,i))
				if(sum[0]-sum[i]==sum[i]-sum[j]&&sum[i]-sum[j]==sum[j])
					ans++;
			if(!f(i,j)&&!f(j,i))
				if(sum[0]-sum[i]-sum[j]==sum[i]&&sum[i]==sum[j])
					ans++;
		}
	}
	cout<<ans;
	return 0;
}
