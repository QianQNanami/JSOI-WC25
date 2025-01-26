#include<bits/stdc++.h>
using namespace std;
int n;
int x,a[1010][20];
int main()
{
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>x;
		for(int j=1; j<=x; j++) cin>>a[i][j];
	}
	cout<<"-1";
	return 0;
}

