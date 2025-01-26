#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100005]={};
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i]=a[i-1]+a[i];
	}
	int m;
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		int m,c;
		cin>>m>>c;
		cout<<a[c]-a[m-1]<<endl;
	}
	return 0;
}
