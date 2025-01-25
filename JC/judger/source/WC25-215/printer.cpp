#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t,ans=0;
	cin>>n>>t;
	queue<int> q;
	int a[n];
	for(int i=0;i<n;i++)
	{
		int cnt;
		cin>>cnt;
		q.push(cnt);
		a[i]=cnt;
	}

	
	while(a[t]>=1)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]>q.front())
			{
				q.back()=q.front();
				q.pop();
				ans++;
			}
			q.pop();
			ans++;
		}
	}
	cout<<ans;
}
