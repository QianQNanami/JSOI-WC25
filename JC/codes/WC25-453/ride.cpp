#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n[66+1],m[66+1];
	int js=0,js1=0;
	for(int i=1;i<=66;i++)
	{
		cin>>n[i];
		n[i]-=64;
		js*=n[i];
	}		
	for(int i=1;i<=66;i++)
	{
		cin>>m[i];
		m[i]-=64;
		js1*=m[i];
	}
	if(js==js1)
	cout<<"Go";
	else cout<<"STAY";
	return 0;
}
/*
COMETQ
HVNGAT
*/


