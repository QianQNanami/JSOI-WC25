#include<bits/stdc++.h>
using namespace std;
int n;
int s[500][500];
int ans1,ans2,op=0;
void dj(int i,int j,int k){
    ans1=0,ans2=0;
    for(int y=0;y<k;y++){
        ans1+=s[i+y][j+y];
        ans2+=s[i+y][j+k-1-y];
    }
    op=max(op,ans1-ans2);
}
int main(){
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>s[i][j];
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            for(int k=2;k<=n;k++) if(k<=n-i+1&&k<=n-j+1){
                dj(i,j,k);
            }
        }
    }

    cout<<op<<endl;
    return 0;
}
