#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
const int INF=0x3f3f3f3f;
const int N  =5e4+10;
int n,m,k,a[N];
bool flag[N];
int main(){
    freopen("story.in","r",stdin);
    freopen("story.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int l,p,v;
    for(int i=1;i<=m;i++){
        cin>>l;
        if(l==1){
            cin>>p>>v;
            a[p]=v;
        }
        else{
            bool ok=1;
            for(int i=1;i<=n&&ok;i++){
                for(int j=i;j<=n&&ok;j++){
                    for(int k=1;k<=n;k++)
                        flag[k]=0;
                    ok==1;
                    for(int k=i;k<=j;k++)
                        flag[a[k]]=1;
                    for(int k=1;k<=n;k++){
                        if(flag[k]==0)
                            ok==0;
                    }
                    if(ok==1){
                        cout<<j-i<<endl;
                        ok=0;
                    }
                    else
                        ok=1;
                }
            }
            if(ok)
                cout<<"-1"<<endl;
        }
    }
}
