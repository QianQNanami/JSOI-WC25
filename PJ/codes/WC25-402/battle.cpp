#include<bits/stdc++.h>
using namespace std;
int m,n;
char a[305][305];
int r,c;
int x,y;
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='Y')
			{
				r=i;
				c=j;
			}
			else if(a[i][j]=='T')
			{
				x=i;
				y=j;
			}
		}
	}
	cout<<-1<<endl;
	return 0;
} 
