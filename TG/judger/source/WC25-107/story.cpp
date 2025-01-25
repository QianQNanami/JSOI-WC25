#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[50005];

int main(){
    freopen("story.in","r",stdin);
    freopen("story.out","w",stdout);
    int n,k,m;
    cin>>n>>k>>m;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=m;i++){
        int t;
        scanf("%d",&t);
        if(t==1){
            int p,v;
            scanf("%d%d",&p,&v);
            a[p]=v;
        }
        else{
            map<int,int>mp;
            int cnt=0;
            int j=0;
            for(j=1;j<=n;j++){
                if(a[j]<=k){
                    mp[a[j]]++;
                    if(mp[a[j]]==1){
                        cnt++;
                        if(cnt==k){
                            break;
                        }
                    }
                }
            }
            if(cnt==k){
                cout<<j<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}
/*
4 3 5
2 3 1 2
2
1 3 3
2
1 1 1
2


6 3 6
1 2 3 2 1 1
2
1 2 1
2
1 4 1
1 6 2
2
*/

