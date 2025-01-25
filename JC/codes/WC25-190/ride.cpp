#include<bits/stdc++.h>
using namespace std;
int main()
{
	string x,y;
	int a=1,b=1;
	cin>>x>>y;
	for(int i=0;i<x.size();i++)
	{
		a=(char(x[i]-65))*a;
	}
	for(int j=0;j<y.size();j++)
	{
		b=(char(y[j]-65))*b;
	}
	if((a%47)==(b%47))cout<<"GO";
	else cout<<"STAY";
	return 0;
}
