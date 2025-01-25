#include<bits/stdc++.h>
using namespace std;
const int maxn=5e4+5;
int a[maxn];
int cnt[35];
int pre[maxn];
vector<set<int> > st(maxn);
int n,k,m;
bool check(int len){
    for(int i=n; i-len>=0; i--){
        if(pre[i]-pre[i-len]==k)return true;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(0);
    freopen("story.in","r",stdin);
    freopen("story.out","w",stdout);
    cin>>n>>k>>m;
    int num=0;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        cnt[a[i]]++;
        for(auto it:st[i-1]){
            st[i].insert(it);
        }
        pre[i]=pre[i-1];
        if(!st[i].count(a[i])){
            st[i].insert(a[i]);
            pre[i]++;
        }
    }
    while(m--){
        int op;
        cin>>op;
        if(op==1){
            int v,c;
            cin>>v>>c;
            cnt[a[v]]--;
            if(pre[v-1]<pre[v]){
                if(a[v]!=c){
                    st[v].erase(a[v]);
                    int x=v;
                    while(x<=n && a[x]!=a[v]){
                        st[x].erase(a[v]);
                        pre[x]--;
                        x++;
                    }
                }
            }
            a[v]=c;
            cnt[a[v]]++;
        }else{
            bool f=true;
            for(int i=1; i<=k; i++){
                if(!cnt[i]){
                    f=false;
                    break;
                }
            }
            if(!f){
                cout<<-1<<endl;
                continue;
            }
            int l=1,r=n;
            while(l<r){
                int mid=l+r>>1;
                if(check(mid)){
                    r=mid;
                }else{
                    l=mid+1;
                }
            }
            cout<<l<<endl;
        }
    }
    return 0;
}
