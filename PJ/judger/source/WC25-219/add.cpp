#include<bits/stdc++.h>
using namespace std;
long long n,a[100010],m,x,y,s[100010];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>x>>y;
		for(int j=x;j<=y;j++)
			s[i]+=a[j];
		cout<<s[i]<<endl;
	}
	return 0;
}
