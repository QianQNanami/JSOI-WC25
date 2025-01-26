#include <iostream>
using namespace std;
int n,m;
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};
char pic[305][305];
int minn=1e9;
bool vis[305][305];
int fx,fy;
bool flag;
bool judge(int x,int y)
{
    if(x<1||y<1||x>n||y>m)return false;
    if(pic[x][y]=='R'||pic[x][y]=='S')return false;
    if(vis[x][y]==true)return false;
    return true;
}
void dfs(int x,int y,int ans)
{
    if(pic[x][y]=='T')
    {
        minn=min(ans,minn);
        flag=1;
        return;
    }
    if(ans>minn)return;
    for(int i=0;i<4;i++)
    {
        int xx=dx[i]+x,yy=dy[i]+y;
        if(judge(xx,yy))
        {
            vis[xx][yy]=1;
            if(pic[xx][yy]=='B')dfs(xx,yy,ans+2);
            else dfs(xx,yy,ans+1);
            vis[xx][yy]=0;
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>pic[i][j];
            if(pic[i][j]=='Y')
            {
                fx=i;
                fy=j;
            }
        }
    }
    vis[fx][fy]=1;
    dfs(fx,fy,0);
    if(flag)cout<<minn;
    else cout<<-1;
    return 0;
}
