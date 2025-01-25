#include <bits/stdc++.h>
using namespace std;
const int N=5e4+5;
int n,k,m,a[N];
int num[35];
int main(){
    freopen("story.in","r",stdin);
    freopen("story.out","w",stdout);
    cin>>n>>k>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    while(m--){
        int x;
        cin>>x;
        if(x==1){
            int u,v;
            cin>>u>>v;
            a[u]=v;
        }
        else{
            int flag=false;
            for(int i=k;i<=n;i++){
                memset(num,0,sizeof(num));
                int cnt=0;
                for(int j=1;j<=i;j++){
                    if(!num[a[j]])  cnt++;
                    num[a[j]]++;
                }
                if(cnt==k){
                    cout<<i<<endl;
                    flag=true;
                    break;
                }
                for(int j=2;j+i-1<=n;j++){
                    num[a[j-1]]--;
                    if(!num[a[j-1]])    cnt--;
                    if(!num[a[j+i-1]])    cnt++;
                    num[a[j+i-1]]++;
                    if(cnt==k){
                        cout<<i<<endl;
                        flag=true;
                        break;
                    }
                }
                if(flag)    break;
            }
            if(!flag)   cout<<-1<<endl;
        }
    }
}
