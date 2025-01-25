#include<bits/stdc++.h>
using namespace std;
int up(int x,int y)
{
	if(x*1.0/y==x/y) return x/y;
	else return x/y+1;
}
int f(int x,int n)
{
	for(int i=1;i<=up(x,2);i++)
	{
		if((x-i)-i==n) return f(x-i,n)+f(i,n);
	}
	return 1;
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<f(a,b);
}
