#include <bits/stdc++.h>
using namespace std;

int n,ans;
bool vis[100010];
struct node{
	int v;
	int fa;
};
node b[100010];
vector<int> a[100010];

void add1(int x,int &tot1)
{
	if(a[x].size()!=0)
	{
		for(auto y:a[x])
		{
			if(vis[y]==false)
			{
				tot1+=b[y].v;
				add1(y,tot1);
			}
		}
	}
	return ;
}

void add2(int x,int &tot2)
{
	if(a[x].size()!=0)
	{
		for(auto y:a[x])
		{
			if(vis[y]==false)
			{
				tot2+=b[y].v;
				add2(y,tot2);
			}
		}
	}
	return ;
}

void add3(int x,int &tot3)
{
	if(a[x].size()!=0)
	{
		for(auto y:a[x])
		{
			if(vis[y]==false)
			{
				tot3+=b[y].v;
				add3(y,tot3);
			}
		}
	}
	return ;
}

int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>b[i].v>>b[i].fa;
		a[b[i].fa].push_back(i);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(b[i].fa!=0 && b[j].fa!=0)
			vis[i]=true;
			vis[j]=true;
			int tot1=0,tot2=b[i].v,tot3=b[j].v;
			add1(0,tot1),add2(i,tot2),add3(j,tot3);
			vis[i]=false;
			vis[j]=false;
			if(tot1==tot2 && tot2==tot3) 
			{
				//cout<<tot1<<' '<<tot2<<" "<<tot3<<endl;
				//cout<<i<<" "<<j<<endl;
				ans++;
			}
		} 
	}
	cout<<ans<<endl;
	return 0;
}
/*
3
1 0
1 1
1 2

9
1 0
1 1
1 1
1 2
1 2
1 3
1 3
1 4
1 8
*/ 

