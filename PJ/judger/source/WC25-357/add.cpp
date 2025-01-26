#include <bits/stdc++.h>
using namespace std;

//bl
int f[100003],a[100003],n,m,l,r;

int main()
{
	//freopen("add.in","r",stdin);
	//freopen("add.out","w",stdout);
	cin >>n;
	f[0] = 0;
	//预处理：f数组为前缀和，以空间换时间 
	for (int i = 1;i <= n;i++)
	{
		cin >>a[i];
		f[i] = f[i - 1] + a[i];
	}
	cin >>m;
	//询问时直接输出即可 
	for (int i = 1;i <= m;i++)
	{
		cin >>l>>r;
		cout <<(f[r] - f[l - 1])<<endl;//=)简单明了 
	}
	/*
	for (int i = 1;i <= n;i++)
	{
		cout <<f[i]<<" ";
	}
	*/
	return 0;
}
