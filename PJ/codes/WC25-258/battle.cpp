#include <bits/stdc++.h>
using namespace std;
int a[300+10][300+10];
bool b[300+10][300+10];
int n,m,x,y,h,z,minans=-1;
char c;
int d[4+1][2+1]={{0,1},{1,0},{0,-1},{-1,0}};
void work(int xx,int yy,int ans)
{
	if (xx==h && yy==z)
	{
		if (minans==-1) minans=ans;
		else minans=min(ans,minans);
		return;
	}
	for (int i=0;i<4;i++)
	{
		int xxx=xx+d[i][0];
		int yyy=yy+d[i][1];
		if (b[xxx][yyy]==false && a[xxx][yyy]!=0)
		{
			b[xxx][yyy]=true;
			work(xxx,yyy,ans+a[xxx][yyy]);
			b[xxx][yyy]=false;
		}
	}
	return; 
}
void WC()
{
	for (int i=1;i<=n;i++)
	{
		for (int k=1;k<=m;k++)
		{
			cin>>c;
			if (c=='E') a[i][k]=1;
			else if (c=='B') a[i][k]=2;
				else if (c=='R' || c=='S') a[i][k]=0;
					else if (c=='Y')
					{
						x=i,y=k;
						a[i][k]=1;
					}
						else if (c=='T')
						{
							h=i,z=k;
							a[i][k]=1;
						}
		}
	}
}
int main()
{
	cin>>n>>m;
	WC();
	b[x][y]=true;
	work(x,y,0);
	cout<<minans<<endl;
	return 0;
}
/*3 4
YBEB
EERE
SSTE
			for (int j=0;j<=n;j++)
			{
				for (int k=0;k<=m;k++)
				{
					cout<<b[j][k];
				}
				cout<<endl;
			}
*/

