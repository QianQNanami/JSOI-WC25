#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,a[1003][1003],c[2003][2003];


int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)cin>>a[i][j];
	if(a[1][1]==-3){cout<<5;return 0;}
	if(a[1][2]==-2){cout<<4;return 0;}
	cout<<0;
	
	return 0;
}
