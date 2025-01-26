#include <bits/stdc++.h>
using namespace std;
int n,m,x,j,y,s=0,a[10001],b[10001],t=0;		
int main()
{
	cin >> n;
	for (int i =1;i <= n;i++)
	{
		cin >> a[i];
	}
	cin >> m;
	for (int j = 1;j <= m;j++)
	{
		s = 0;
		cin >> x >> y;
	}
	for (int k = x;k <= y;k++)
	{
		s+=a[k]; 		
	}
	b[j] = s;
	t++;
	for (int i = 1;i <= t;i++)	cout << b[i]<<endl;
	return 0;
}	
