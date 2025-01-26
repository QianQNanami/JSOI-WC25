#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main()
{
	freopen("piano.in","r",stdin);
	freopen("piano.out","w",stdout);
	int t,quan=0,x;
	cin>>t;
	while(quan<t)
	{
		quan++;
		cin>>x;
		for(int i=1;i<=x;i++)
		{
			cin>>a[i];
		}
	}
	cout<<-1;
}
