#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int n,m,yx,yy,tx,ty,time=0;
	cin>>n>>m;
	char a[n+5][m+5];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]=='Y') 
			{
				yx=i;
				yy=j;
			}
			if(a[i][j]=='T')	
			{
				tx=i;
				ty=j;
			}
		}
	}
	for(int i=yx+1;i<=n;i++)
	{
		for(int j=yy+1;j<=m;j++)
		{	
			if(a[i][j]=='E') time++; 
			if(a[i][j]=='B') time+=2;	
		}
	}
	cout<<time; 
	return 0;
}

