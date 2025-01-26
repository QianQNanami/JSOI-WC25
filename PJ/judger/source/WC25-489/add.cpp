#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[100005],m1[100005],m2[100005],qzh[100005];
int main()
{
	cin>>n;
	qzh[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		qzh[i]=qzh[i-1]+a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>m1[i]>>m2[i];
		cout<<qzh[m2[i]]-qzh[m1[i]-1]<<endl;
	}
	return 0;
}
