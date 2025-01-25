#include<bits/stdc++.h>
#define MAXN 100010
#define MAXH 20
using namespace std;
int n,rt,ans;
int f[MAXN][MAXH+1],d[MAXN];
int w[MAXN],ws1[MAXN];
int a[MAXN],bak[MAXN];
vector<int>edge[MAXN];
int dfs(int u,int fa){
    ws1[u]+=w[u];
    f[u][0]=fa,d[u]=d[fa]+1;
    for(int i=1;(1<<i)<=d[u];++i){
        f[u][i]=f[f[u][i-1]][i-1];
    }
    for(int v:edge[u]){
        ws1[u]+=dfs(v,u);
    }
    return ws1[u];
}
int lca(int a,int b){
    int flag=0;
    if(d[a]>d[b]){swap(a,b),flag=1;}
    for(int i=MAXH;i>=0;--i){
        if((1<<i)<=d[b]-d[a])b=f[b][i];
    }
    if(a==b)return flag+1;
    return 0;
}
void solve(){
    a[1]=rt;

    for(int i=1;!edge[a[i]].empty();++i){
        a[i+1]=edge[a[i]][0];
    }
    for(int i=n;i>=1;--i){
        bak[i]=bak[i+1]+w[a[i]];
    }
    for(int i=2;i<n;++i){
        if(bak[i]*3==bak[rt]<<1){
            for(int j=i+1;j<=n;++j){
                if(bak[j]<<1==bak[i])++ans;
            }
        }
    }
}
signed main(){
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
    scanf("%d",&n);

    for(int i=1;i<=n;++i){
        int fa;
        cin>>w[i]>>fa;
        if(fa==0)rt=i;
        else edge[fa].push_back(i);
    }
    if(n>100){
        solve();
    }
    else{
    	dfs(rt,0);
    	for(int i=1;i<n;++i){
    	    if(i==rt)continue;
    	    for(int j=i+1;j<=n;++j){
    	        if(j==rt)continue;
    	        int check=lca(i,j);
    	        if(!check){
    	            if(ws1[i]==ws1[j]&&ws1[j]*3==ws1[rt])++ans;
    	        }else if(check==1){//a is ancester
    	            if(ws1[i]==ws1[j]<<1&&ws1[rt]==ws1[j]*3)++ans;
    	        }else{//b is ancester
    	            if(ws1[i]<<1==ws1[j]&&ws1[rt]==ws1[i]*3)++ans;
    	        }
    	    }
    	}
	}
    printf("%d\n",ans);
    return 0;

}
