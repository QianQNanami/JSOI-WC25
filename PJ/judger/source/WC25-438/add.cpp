#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	int a[n+5];
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cin>>m;
	int x[m],y[m],num[m];
	for(int i=1;i<=m;i++)
		num[i]=0;
	for(int i=1;i<=m;i++)
	{
		cin>>x[i]>>y[i];
		for(int j=x[i];j<=y[i];j++)
			num[i]+=a[j];
	}
	for(int i=1;i<=m;i++)
		cout<<num[i]<<endl;
	return 0;	
}
