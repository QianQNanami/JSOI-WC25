#include <bits/stdc++.h>
using namespace std;

//bl
int n,m,kx,ky,zx,zy,a,s;
int dx,dy;
int d1[4] = {1,0,-1,0};
int d2[4] = {0,-1,0,1};
char Map[303][303];
int cnt,ans = 10000,tf,vis[303][303];

void dfs(int x,int y,int st)
{
	if (x == zx && y == zy)
	{
		st += s;
		//cout<<"win"<<s<<" "<<st - s<<endl;
		ans = min(st,ans);
		//cout <<st<<endl;
		tf = 1;
		return;
	}
	else
	{
		for (int i = 0;i < 4;i++)
		{
			//cout<<a<<"."<<"i = "<<i<<endl<<endl;
			dx = x + d2[i];
			dy = y + d1[i];
			if (Map[dx][dy] != 'S' && vis[dx][dy] == 0 && dx != 0 && dx <= m && dy > 0 && dy <= n)
			{
				//cnt++;
				//cout<<"now is in ("<<dx<<","<<dy<<") and the time is "<<st<<" and the s is "<<s<<endl;
				if (Map[dx][dy] == 'E' || Map[dx][dy] == 'T') 
				{
					vis[dx][dy] = 1;
					dfs(dx,dy,(st + 1));
					vis[dx][dy] = 0;
				}
				else
				{	
					vis[dx][dy] = 1;
					s++;
					dfs(dx,dy,(st + 1));
					s--;
					vis[dx][dy] = 0;
					//t--;	
				}
				
			}
		}
	}
}

int main()
{
	cin >>m>>n;//m{行}和n{列}是相反的！！！ 
	//cout <<m<<" "<<n;
	for (int i = 1;i <= m;i++)
	{
		for (int j = 1;j <= n;j++)
		{
			cin >>Map[i][j];
			if (Map[i][j] == 'Y')
			{
				kx = i;
				ky = j;
			}
			if (Map[i][j] == 'T')
			{
				zx = i;
				zy = j;
			}
			if (Map[i][j] == 'R')
			{
				Map[i][j] = 'S';
			}
		}
	}
	dfs(kx,ky,0);
	if (tf == 0) cout <<-1<<endl;
	else
	{
		cout <<ans<<endl;
	}
	/*
	for (int i = 1;i <= m;i++)
	{
		for (int j = 1;j <= n;j++)
		{
			cout <<Map[i][j]<<" ";
		}
		cout <<endl;
	}
	*/
	return 0;
}
