#include<bits/stdc++.h>
using namespace std;
int n;
int a[110][110];
int ans=0;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int k=1;k<=n;k++){
        for(int x=1;x+k<=n+1;x++){
            for(int y=1;y+k<=n+1;y++){
                int num=0;
                for(int xx=x;xx<=k+x;xx++){
                    num+=a[xx][xx];
                }
                for(int yy=k+y;yy>=y;yy--){
                    num-=a[yy][yy];
                }
                ans=max(ans,num);
            }
        }
    }
    cout<<ans;
    return 0;
}
