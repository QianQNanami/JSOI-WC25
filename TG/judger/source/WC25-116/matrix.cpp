#include <bits/stdc++.h>
#define MAXN 450
using namespace std;

int n,inn[MAXN][MAXN],dp[MAXN][MAXN][MAXN];
int d1[]={0,0,1,1,0},d2[]={0,0,0,1,1};

int al(int x,int y,int l)
{
    int a=0,b=0;
    for(int m=x,n=y; m<=x+l-1,n<=y+l-1; m++,n++)
            a+=inn[m][n];
    for(int m=x+l-1,n=y; m>=x,n<=y+l-1; m--,n++)
            b+=inn[m][n];
    return a-b;
}

int main()
{
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    scanf("%d",&n);
    for(int i=1; i<=n;i ++)
    {
        for(int j=1; j<=n; j++)
        {
            scanf("%d",&inn[i][j]);
        }
    }
    for(int k=2; k<=n; k++)
    {
        for(int i=1; i<=n-k+1; i++)
        {
            for(int j=1; j<=n-k+1; j++)
            {
                int tmp=0;
                for(int t=1; t<=4; t++)
                {
                    tmp=max(tmp,dp[i+d1[t]][j+d2[t]][k-1]);
                }

                dp[i][j][k]=max(tmp,al(i,j,k));
            }
        }
    }
    cout << dp[1][1][n];


    return 0;
}
