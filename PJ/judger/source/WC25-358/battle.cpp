#include<bits/stdc++.h>
using namespace std;
char Map[309][309];
int main()
{
	freopen("battle.in","r",stdin);
	freopen("battle.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>Map[i][j];
		}
	}
	cout<<-1;
	return 0;
}
