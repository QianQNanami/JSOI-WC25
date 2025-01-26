#include<bits/stdc++.h>
using namespace std;
int a[10005],n,m,q,w,sum[10005];
int main()
{
	cin>>n;
//	cout<<endl;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
//	cout<<endl;
	cin>>m;
//	cout<<endl;

//	for(int i=1;i<=m;i++)
//	{
//		cin>>q>>w;
//		for(int j=q;j<=w;j++)
//		{
//			sum[i]+=a[j];
//		}
//	}

	for(int i=1;i<=n;i++)
	{
		a[i]+=a[i-1];
	}
//	for(int i=1;i<=n;i++)
//	{
//		cout<<a[i];
//	}
	for(int i=1;i<=m;i++)
	{
		cin>>q>>w;
		sum[i]=a[w]-a[q-1];
	}
	cout<<endl;
	for(int i=1;i<=m;i++)
	{
		cout<<sum[i]<<endl; 
	}
	return 0;
}

