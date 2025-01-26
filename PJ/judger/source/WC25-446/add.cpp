#include <bits/stdc++.h>
using namespace std;
int a[100005],l,r,sum[100005],f[100005];
int main()
{
	int n,m;
	cin >>n;
	for(int i = 1;i <= n;i++)
	{
		cin >>a[i];
	}
	for(int i = 1;i <= n;i++)
	{
		f[i]=f[i-1]+a[i];
		cout <<f[i]<<endl;
	}
	cin >>m;
	for(int i = 1;i <= m;i++)
	{
		cin >>l>>r;
		sum[i]=f[r]-f[l-1];	
	}
	for(int i = 1;i <= m;i++)
	{
		cout <<sum[i]<<endl;
	}
	return 0;
}
