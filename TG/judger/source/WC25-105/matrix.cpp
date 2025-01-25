#include <bits/stdc++.h>
using namespace std;
int a[405][405];
int n;
int he(int x,int y)
{
    int ans=0;
    int s=1;
    while(x+s<=n&&y+s<=n){
        int sum=0;
        for(int i=0;i<=s;i++){
            sum+=a[x+i][y+i]-a[x+i][y+s-i];
        }
        ans=max(ans,sum);
        s++;
    }
    return ans;
}
int main()
{
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    int mmax=INT_MIN;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            mmax=max(mmax,he(i,j));
        }
    }
    cout<<mmax;
    return 0;
}
