#include<bits/stdc++.h>
using namespace std;
void read(){
	freopen("story.in","r",stdin);
	freopen("story,out","w",stdout);
} 
int n,m,k,maxxx,ans=INT_MAX;
int a[114514],f[400][35];
void write(int p,int v,int old){
    for(int i=p;i<=n;i++){
        f[i][old]--;
        f[i][v]++;
    }
}
void solve(){

    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            bool flag=1;
            for(int v=1;v<=k;v++){
                if(f[j][v]-f[i-1][v]==0)flag=0;
            }
            if(flag)ans=min(ans,j-i+1);
        }
    }
}
int main(){
	read();
    cin>>n>>k>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        f[i][a[i]]++;
        for(int j=1;j<=k;j++){
            f[i][j]+=f[i-1][j];
        }
    }
    for(int i=1;i<=m;i++){
        int type;
        cin>>type;
        if(type==1){
            int p,v;
            cin>>p>>v;
            write(p,v,a[p]);
            a[p]=v;
        }else{
            solve();
            if(ans=INT_MAX)cout<<-1<<endl;
            else cout<<ans<<endl;
        }
        for(int i_=1;i_<=n;i_++){
            for(int j=1;j<=k;j++)cout<<f[i][j]<<" ";
            cout<<endl;
        }
    }
    return 0;
}
