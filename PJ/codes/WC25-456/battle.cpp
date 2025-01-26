#include<bits/stdc++.h>
using namespace std;
string a[305][305];
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=1; i<=m; i++)
	{
		for(int j=1; j<=n; j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<-1;
	return 0;
}

