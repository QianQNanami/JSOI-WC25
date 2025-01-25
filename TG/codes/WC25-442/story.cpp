#include<bits/stdc++.h>
using namespace std;
int K,N,M;
struct node{
	bool res[31];
};
node res1;
struct thetree{
	int left,right;
	node date;
	bool lazy[31];
}tree[200020];
node meger(node a,node b)
{
	node ret;
	for(int i=1;i<=K;i++)
	{
		ret.res[i]=a.res[i]||b.res[i];
	}
}
void build_tree(int p,int l,int r)
{
	tree[p].left=l;
	tree[p].right=r;
	int mid=(l+r)/2;
	build_tree(2*p,l,mid);
	build_tree(2*p+1,mid+1,r);
}
node search_tree(int p,int l,int r)
{
	if(l>tree[p].right||r<tree[p].left)
	{
		return res1;
	}
	if(l<=tree[p].left&&r>=tree[p].right)
	{
		return tree[p].date;
	}
	return meger(search(2*p,l,r),search(2*p+1,l,r));
}
void change_tree(int p,int x,int k)
{
	if(x>tree[p].right||x<tree[p].left)
	{
		return;
	}
	if(x<=tree[p].left&&x>=tree[p].right)
	{
		tree[p].date.res[k]=true;
	}
	change_tree(2*p,x,k);
	change_tree(2*p+1,x,k);
	tree[p].date.res[k]=true;
}
bool all(l,r)
{
	for(int i=1;i<=K;i++)
	{
		if(!search_tree(1,l,r).res[i])
		return false;
	}
	return true;
}
int main()
{
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>N>>K>>M;
	build_tree(1,1,N);
	for(int i=1,x;i<=n;i++)
	{
		cin>>x;
		change_tree(1,i,x)
	}
	for(int i=1;i<=m;i++)
	{
		int x;
		cin>>x
		if(x==1)
		{
			int y,z;
			cin>>y>>z;
			change_tree(1,y,z)
		}
		else
		{
			int theout=INT_MAX;
			for(int i=1;i<=n;i++)
			{
				for(int j=i+k;j<=n;j++)
				{
					if(all(i,j))
					theout=min(theout,j-i+1);
				}
			}
			if(theout==INT_MAX)
			cout<<-1;
			else
			cout<<theout;
		}
	}
	return 0;
}

