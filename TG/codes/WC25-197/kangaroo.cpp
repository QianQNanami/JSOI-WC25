#include<bits/stdc++.h>
using namespace std;
int n,a[10010],b[10010],sum=0,ans=0;
vector<int> v[10010];
priority_queue<pair<int,int>,vector<pair<int,int> >,greater<pair<int,int> > > q;
bool f[10010];
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[i]=a[i]*2;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i!=j&&a[i]>=b[j])
			{
				v[j].push_back(i);
				f[i]=1;
				sum++;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(v[i].size()) q.push(make_pair(v[i].size(),i));
	}
	while(sum>0)
	{
		int p=q.top().second;
		q.pop();
		bool t=0;
		for(int i=0;i<v[p].size();i++)
		{
			if(f[v[p][i]])
			{
				f[v[p][i]]=0;
				t=1;
				break;
			}
		}
		sum-=v[p].size();
		if(t==0) continue;
		ans++;
		
	}
	cout<<ans;
	return 0;
}
/*
8
2 5 7 6 9 8 4 2
*/
