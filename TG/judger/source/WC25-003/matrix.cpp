#include<bits/stdc++.h>
using namespace std;
int n,a[405][405],sr[405][405],sl[405][405],ans;

int main()
{
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);

    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            scanf("%d",&a[i][j]);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            sl[i][j]=sl[i-1][j+1]+a[i][j];
            sr[i][j]=sr[i-1][j-1]+a[i][j];
            //printf("(sl:%d,sr:%d)",sl[i][j],sr[i][j]);
        }
        //cout<<endl;
    }
    ans=sr[2][2]-sl[2][1];
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=n-1;j++)
        {
            for(int l=2;i+l-1<=n && j+l-1<=n;l++)
            {
                ans=max(ans,(sr[i+l-1][j+l-1]-sr[i-1][j-1])-(sl[i+l-1][j]-sl[i-1][j+l]));
            }
        }
    }
    printf("%d",ans);
    return 0;
}
