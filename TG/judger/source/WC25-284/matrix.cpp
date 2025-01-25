#include <bits/stdc++.h> 
using namespace std;
int d[405][405],n,ans=-0x7FFFFFFF;
int Dy(int a,int b)
{
	int cnt = 0;
	for(int i = a;i<= b;i++)
	{
		cnt+=d[i][i];
	}
	for(int i = 0;i <= b-a;i++)
	{
		cnt-=d[b-i][a+i];
	}
	return cnt;
}
int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin >> n;
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=n;j++)
		{
			cin >> d[i][j];
		}
	}
	for(int i = 2;i<=n;i++)
	{
		for(int j = 1;j<=n-i+1;j++)
		{
			for(int k = 1;k<=n-i+1;k++)
			{
				ans = max(ans,Dy(j,j+i-1));
			}
		}
	}
	cout << ans;
	return 0;
}
