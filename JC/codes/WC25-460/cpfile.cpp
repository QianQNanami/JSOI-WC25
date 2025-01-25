#include<bits/stdc++.h>
using namespace std;

int main()
{
	int x;
	cin>>x;
	int shi[x+10];
	for(int i=0;i<x;i++)
	{
		cin>>shi[i];
	}
	sort(shi,shi+x);
	int ans=0,y=x-1;
	for(int i=0;i<x-1;i++)
	{
		ans=ans+y*shi[i];
		y--;
	}
	cout<<ans;
	return 0;
}
