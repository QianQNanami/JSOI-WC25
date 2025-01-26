#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
const int N=505;
const int maxn=-1e9;
int f[N][N];
int a[N][N];
bool vis[N][N];
int n,m;
int cnt;
int ans=-1;
int dp[N][N];
void print()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
}
void fi()
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            dp[i][j]=1000000;
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
            cin>>a[i][j];
        }
    }
    for(int i=0;i<=n;i++)a[i][0]=maxn;
    for(int i=0;i<=m;i++)a[0][i]=maxn;
    for(int i=0;i<=m;i++)a[n+1][i]=maxn;
    for(int i=0;i<=n;i++)a[i][m+1]=maxn;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            f[i][j]=min(abs(a[i][j]-a[i-1][j]),min(abs(a[i][j]-a[i+1][j]),min(abs(a[i][j]-a[i][j-1]),abs(a[i][j]-a[i][j+1]))));
        }
    }
    int xo,yo,xt,yt;
    fi();
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>vis[i][j];
            if(vis[i][j]==true)
            {
               cnt++;
               if(cnt==1)
               {
                   xo=i,yo=j;
               }
               if(cnt>1)
               {
                   xt=i,yt=j;
                   int q,p,v,u;
                   q=max(xt,xo);
                   p=min(xt,xo);
                   v=max(yt,yo);
                   u=min(yt,yo);
                   dp[p][u]=f[i][j];

                   for(int k=p;k<=q;k++)
                   {
                       for(int kk=u;kk<=v;kk++)
                       {
                           dp[k][kk]=min(dp[k-1][kk],min(dp[k][kk-1],dp[k][kk]));
                       }
                   }
                   ans=max(dp[q][v],ans);

                }
            }
        }
    }
    cout<<ans;
    return 0;
}
/*
3 5
20 21 18 99 5
19 22 20 16 26
18 17 40 60 80
1 0 0 0 1
0 0 0 0 0
0 0 0 0 1





*/
