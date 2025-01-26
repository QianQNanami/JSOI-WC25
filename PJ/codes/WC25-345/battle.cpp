#include<bits/stdc++.h>
using namespace std;
int m,n,qx[100001],qy[100001],mov[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
char mp[301][301];
bool vis[301][301];
void bfs(int xc,int yc)
{
	int f=1,r=1,time=0;
	qx[1]=xc;qy[1]=yc;
	vis[xc][yc]=false;
	while(f<=r)
	{
		for(int i=0;i<4;i++)
		{
			int x=qx[r]+mov[i][0],y=qy[r]+mov[i][1];
			if(x<=m&&x>0&&y<=n&&y>0&&mp[x][y]!='S'&&mp[x][y]!='R'&&vis[x][y])
			{
				printf("1 ");
				r++;time++;
				qx[r]=x;qy[r]=y;
				vis[x][y]=false;
				if(mp[x][y]=='B') time++;
				if(mp[x][y]=='T')
				{
					printf("%d",time);
					exit(0);
				}
			}
		}
		f++;
	}
}
int main()
{
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m;i++) for(int j=1;j<=n;j++) vis[i][j]=true;
    for(int i=1;i<=m;i++) for(int j=1;j<=n;j++) cin>>mp[i][j];
    for(int i=1;i<=m;i++) for(int j=1;j<=n;j++) if(mp[i][j]=='Y') bfs(i,j);
    printf("-1");
	return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
int m,n,ans=INT_MAX,mov[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
char mp[301][301];
void dfs(int x,int y,int time)
{
	if(mp[x][y]=='T')
	{
		ans=min(ans,time);
		return;
	}
	for(int i=0;i<4;i++)
	{
		x+=mov[i][0];y+=mov[i][1];
		if(x<=m&&x>0&&y<=n&&y>0&&mp[x][y]!='S'&&mp[x][y]!='R')
		{
			time++;
			if(mp[x][y]=='B') time++;
			dfs(x,y,time);
			if(mp[x][y]=='B') time--;
			time--;
		}
		x-=mov[i][0];y-=mov[i][1];
	}
}
int main()
{
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m;i++) for(int j=1;j<=n;j++) cin>>mp[i][j];
    for(int i=1;i<=m;i++) for(int j=1;j<=n;j++) if(mp[i][j]=='Y') dfs(i,j,0);
    if(ans==INT_MAX) printf("-1");
    else printf("%d",ans);
	return 0;
}

3 4
YBEB
EERE
SSTE
*/

