#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	int x[1001],n[1001];
	int y=1,m=1;
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
	{
		x[i]=a[i]-64;
		y=x[i]*y;
	}
	for(int i=0;i<b.size();i++)
	{
		n[i]=b[i]-64;
		m=m*n[i];
	}
	if(y=m)
	{
		cout<<"GO";
	}
	else
	{
		cout<<"STAY";
	}
	return 0;
}
