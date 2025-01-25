#include<bits/stdc++.h>
#define fre 1
using namespace std;
typedef long long ll;

#define mp(a,b) make_pair(a,b)
#define inf 0x3f3f3f3f

const int N=5e4+10;
int n,kk,m,a[N];
bool vis[N];

int main(){
#ifdef fre
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>kk>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	while(m--){
		int e;
		cin>>e;
		if(e==1){
			int u,v;
			cin>>u>>v;
			a[u]=v;
		}
		if(e==2){
			int ans=inf;
			for(int i=1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					memset(vis,0,sizeof(vis));
					int tot=0;
					for(int k=i;k<=j;k++){
						if(!vis[a[k]]){
							vis[a[k]]=1;
							tot++;
						}
					}
					if(tot==kk){
						ans=min(ans,j-i+1);
					}
				}
			}
			if(ans!=inf)cout<<ans<<endl;
			else cout<<-1<<endl;
		}
	}
#ifdef fre
	fclose(stdin);
	fclose(stdout);
#endif
    return 0;
}
