#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int v[N];
int root,all;
int dp[N];
int si,fir,sec;
long long ans;
vector<int>G[N];
void dfs(int u,int fa) {
    dp[u]=v[u];
    for(int i=0;i<G[u].size();i++) {
        int to=G[u][i];
        if(to==fa)continue;
        dfs(to,u);
        dp[u]+=dp[to];
    }
}
void dfs2(int u){
    if(dp[u]==all){
        ans+=fir+sec;
    }
    if(dp[u]==all*2&&u!=root)sec++;
    for(int i=0;i<G[u].size();i++){
        int to=G[u][i];
        dfs2(to);
    }
	if(dp[u]==all*2&&u!=root)sec--;
    if(dp[u]==all)fir++;
}
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int n;
    cin>>n;
    for(int i=0;i<=n;i++){
    	G[i].clear();
	}
    int f;
    for(int i=1;i<=n;i++){
    	int c;
        cin>>c>>f;
        v[i]=c;
        if(f==0)root=i;
        else G[f].push_back(i);
    }
    for(int i=1;i<=n;i++){
    	all+=v[i];
	}
    if((all%3+3)%3!=0) {
        cout<<0;
        return 0;
    }
    all/=3;

    dfs(root,0);
    dfs2(root);
    cout<<ans;
    
    return 0;
}
