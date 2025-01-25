#include<bits/stdc++.h>
using namespace std;
const int MAXN=400+10;
int mp[MAXN][MAXN];
long long ans;
int n;
int main()
{
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mp[i][j];
        }
    }
    for(int i=0;i<n;i++)// start in mp[i][j]
    {
        for(int j=0;j<n;j++)
        {
            for(int k=2;k<=n;k++)
            {
                if(i+k>n || j+k>n) break;
                long long need=0;
                //cout<<i<<' '<<j<<endl;
                //long long need_sec=0;
                for(int z=0;z<k;z++)
                {
                    //cout<<mp[i+z][j+z]<<endl;
                    need+=mp[i+z][j+z];
                }

                for(int z=0;z<k;z++)
                {
                    //cout<<mp[i+k-z-1][j+z]<<endl;
                    need-=mp[i+k-z-1][j+z];
                }
                //cout<<need<<endl;
                ans=max(ans,need);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
