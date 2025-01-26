#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100005],n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int m;
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		int sum=0;
		int l,r;
		cin>>l>>r;
		for(int j=l;j<=r;j++)
		{
			sum+=a[j];
		}
		cout<<sum<<endl;
	}
	return 0;
}
