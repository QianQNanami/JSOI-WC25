#include <bits/stdc++.h>
using namespace std;
int a[100000+10];
int main()
{
	int n,m,x,y;
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i]+=a[i-1];
	}
	cin>>m;
	for (int i=0;i<m;i++)
	{
		cin>>x>>y;
		cout<<a[y]-a[x-1]<<endl;
	}
	return 0;
}

