#include <bits/stdc++.h>
//#define int long long
using namespace std;
const int N=400;
int n;
int a[N+5][N+5];
int s1[N+5][N+5],s2[N+5][N+5];
int ans=-0x3f3f3f3f;
signed main(){
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    cin>>n;
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            s1[i][j]=a[i][j]+s1[i-1][j+1];
        }//右上到左下
    }
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            s2[i][j]=s2[i-1][j-1]+a[i][j];
        }
    }//左上到右下
    for (int i=2;i<=n;i++){
        for (int j=2;j<=n;j++){
            for (int k=2;k<=min(i,j);k++){
                ans=max(ans,s2[i][j]-s2[i-k][j-k]-(s1[i][j-k+1]-s1[i-k][j+1]));
            }
        }
    }
    cout<<ans<<endl;
    // for (int i=1;i<=n;i++){
    //     for (int j=1;j<=n;j++){
    //         cout<<s1[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;

}
/*3
1
2
3
4
5
6
7
8
9
3  ‐3 4 5
 7 9 ‐2
 1 0 ‐6
*/
