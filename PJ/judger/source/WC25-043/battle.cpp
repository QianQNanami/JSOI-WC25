#include <bits/stdc++.h>
using namespace std;/*
char map[300][300];			//地图数组
bool aga[300][300];			//判重数组：0未走过，1已走过
int dfs(unsigned short x,unsigned short y,unsigned short p,unsigned short q)
{
	unsigned step=0;			//目前走过的秒数
	unsigned short dire=0;			//方向：0为上，1为右，2为下，3为左
	unsigned short i=p,j=q;			//以敌方坐标开始的深搜坐标 
}*/
int main()
{
//	freopen("battle.in","r",stdin);
	unsigned short m,n;
	cin>>m>>n;
	char map[m][n];
	for(unsigned short i=0;i<m;i++)
		for(unsigned short j=0;j<n;j++)
		{
			cin>>map[i][j];
/*			if(map[i][j]=='Y')			//将己方坐标传递给深搜函数dfs 
			{
				unsigned short x=i;
				unsigned short y=j;
			}
			if(map[i][j]=='T')			//将敌方坐标传递给深搜函数dfs
			{
				unsigned short p=i;
				unsigned short q=j;
			}
		}*/
	cout<<-1;
	return 0;
}
