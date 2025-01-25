#include<bits/stdc++.h>
using namespace std;
queue<int> q;
int n,a[50005],num=1,sum;
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	{
		q.push(a[i]);
	}
	while(!q.empty())
	{
		if(q.front()>=2*a[num])
		{
			
			sum++;
			num++;
		}
		q.pop();
	}
	cout<<sum;
	return 0;
}
