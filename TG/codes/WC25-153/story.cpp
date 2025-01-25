#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int top[1000005];
int n,k,m;
void len(){
    int minn=10000000;
    for(int i = 1;i<=n;i++){
        for(int j = 2;j<=n;j++){
            if(j-i+1<k) continue;
            memset(top,0,sizeof(top));
            if(i>=j) continue;
            for(int l = i;l<=j;l++){
                top[a[l]]++;
            }
            bool flag=1;
            for(int l = 1;l<=k;l++){
                if(top[l]==0){
                    flag=0;
                    break;
                }
            }
            if(flag){
                minn=min(minn,j-i+1);
            }
        }
    }
    if(minn==10000000) cout<<-1<<endl;
    else cout<<minn<<endl;
    return;
}
int main(){
    freopen("story.in","r",stdin);
    freopen("story.out","w",stdout);
    cin>>n>>k>>m;
    for(int i = 1;i<=n;i++) cin>>a[i];
    for(int i = 1;i<=m;i++){
        int x;
        cin>>x;
        if(x==1){
            int p,v;
            cin>>p>>v;
            a[p]=v;
        }
        else{
            len();
        }
    }
    return 0;
}

