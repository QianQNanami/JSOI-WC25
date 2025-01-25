#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	int x1=a.size(),x2=b.size(),s1=1,s2=1;
	for(int i=0;i<=x1;i++)
	{
		x1*=a[i];
	}
	for(int i=0;i<x2;i++)
	{
		s2*=a[i];
	}
	s1%=47;
	s2%=47;
	if{
	cout<<"GO";
	}
	else 
	{
	cout<<"STAY";
	}
	return 0;
	}
