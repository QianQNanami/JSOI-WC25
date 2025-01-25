#include<bits/stdc++.h>
using namespace std;
int n,a[100005],m,s,f[1005],ans=INT_MAX;
int main()
{
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>s>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=m;i++)
	{
		int id,p,v;
		cin>>id;
		if(id==1)
		{
			cin>>p>>v;
			a[p]=v;
		}
		else
		{
			cout<<-1<<endl;
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
*/
