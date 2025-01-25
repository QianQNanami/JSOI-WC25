#include<bits/stdc++.h>
using namespace std;
struct thetree{
	int f,d;
}tree[100010];
bool find(int i,int j)
{
	for(int k=i;k!=0;k=tree[k].f)
	{
		if(k==j) return true;
	}
	return false;
}
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int x,y;
		cin>>x>>y;
		tree[i].d+=x;
		tree[i].f=y;
		for(int j=y;j!=0;j=tree[j].f)
		tree[j].d+=x;
	}
	for(int i=2;i<=n;i++) 
	{
		for(int j=i;j<=n;j++)
		{
				if( !find(i,j) && !find(j,i)  &&  tree[i].d==tree[j].d && tree[j].d==tree[1].d-tree[j].d-tree[i].d ) ans++;
				if( find(j,i)&&tree[j].d==tree[i].d-tree[j].d&&tree[j].d==tree[1].d-tree[i].d)ans++;
				if( find(i,j)&&tree[i].d==tree[j].d-tree[i].d&&tree[i].d==tree[1].d-tree[j].d)ans++;
		}
	}
	cout<<ans;
	return 0;
}

