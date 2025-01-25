#include<bits/stdc++.h>
using namespace std;
const int N=5e5;
int a[N];
int a1[N];
int vis[N];
int n;
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout); 
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	sort(a,a+n+1);
	for(int i=1;i<=n;i++)
		a1[i]=a[i]>>1;
		int cnt=0;
	for(int i=1;i<=n;i++)
	{
		vis[i]=1;
		for(int j=1;j<=n;j++)
		{
			if(a[i]<=a1[j]&&vis[j]==0)
			{
				vis[j]=1;
				cnt++;
				break;
			}
		}
	}
	cout<<cnt;
	return 0;
}
/*
8
2 5 7 6 9 8 4 2
*/ 
