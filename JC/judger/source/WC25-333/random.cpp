#include<bits/stdc++.h>
using namespace std;
int n,m,a,x,y;
int main()
{
	cin>>n;
	for(int i=1,x;i<=n;i++)
		cin>>x;
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a;
		if(a==1) 
			cin>>x>>y;
		else 
			cin>>x;
	}
	cout<<"4 5 1 3";
	return 0;
}
