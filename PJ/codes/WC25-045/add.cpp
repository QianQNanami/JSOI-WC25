#include <bits/stdc++.h> 
using namespace std;
int main()
{
	long long n;
	cin>>n;
	long long a[n+1]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];	
	}
	long long m;
	cin>>m;
	int x,y;
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		int sum=0;
		for(int j=x;j<=y;j++)
		{
			sum+=a[j];	
		}
		cout<<sum<<endl;
	} 
	return 0;
}
