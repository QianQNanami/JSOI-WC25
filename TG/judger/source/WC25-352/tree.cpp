#include<bits/stdc++.h>
using namespace std;
int n,tt;
long long ans;
vector<int> ca;
int f;
struct tree{
	int w,fa,total;
}t[300005];
void findtotal(int u,int w)
{
	t[u].total+=w;
	if(t[u].fa==0) return;
	else findtotal(t[u].fa,w);
	return;
}
void find2(int a)
{
	if(t[a].fa==0) return;
	if(t[a].total==2*tt) ++f;
	else find2(t[a].fa);
	return;
}
bool find(int a,int b)
{
	int aa=a;
	while(t[aa].fa!=0)
	{
		if(t[aa].fa=b) return true;
		else aa=t[aa].fa;
	}
	int bb=b;
	while(t[bb].fa!=0)
	{
		if(t[bb].fa=a) return true;
		else bb=t[bb].fa;
	}
	return false;
}
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;++i) 
	{
		scanf("%d%d",&t[i].w,&t[i].fa);
		tt+=t[i].w;
	}
	if(tt%3!=0)
	{
		cout<<0;
		return 0;
	}
	tt/=3;
	for(int i=1;i<=n;++i) findtotal(i,t[i].w);
	for(int i=1;i<=n;++i)
		if(t[i].total==tt)
		{
			ca.push_back(i);
			f=0;
			find2(i);
			ans+=f;
		}
	for(int i=0;i<ca.size()-1;++i)
		for(int j=i+1;j<ca.size();++j)
			if(find(ca[i],ca[j])) ans++;
	printf("%d",ans);
	return 0;
}
/*
3
1 0
1 1
1 2

11
4 0
3 1
3 1
3 1
2 2
1 3
1 3
2 4
2 4
1 5
1 9

8
0 0
4 1
4 1
3 1
1 2
1 2
2 3
3 4
*/
