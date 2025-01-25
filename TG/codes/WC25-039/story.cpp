#include<bits/stdc++.h>
using namespace std;
int a[50005];
bool vis[35];
int cnt[35];
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	int n,k,m;
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++)cin>>a[i],cnt[a[i]]++;
	for(int i=1;i<=m;i++){
		int op;
		cin>>op;
		if(op==1){
			int p,v;
			cin>>p>>v;
			cnt[a[p]]=max(cnt[a[p]]-1,0);
			cnt[v]++;
			a[p]=v;
		}
		if(op==2){
			int ans=n+1;
			for(int i=1;i<=k;i++){
				if(cnt[i]==0){
					cout<<-1<<endl;
					goto x;
				}
			}
			for(int s=1;s+k<=n;s++){
				for(int t=s+k-1;t<=n;t++){
					memset(vis,0,sizeof(vis));
					for(int i=s;i<=t;++i){
						vis[a[i]]=1;
					}
					for(int i=1;i<=k;++i){
						if(!vis[i])goto p;
					}
					if(ans>t-s+1){
						ans=t-s+1;
					}
					p:;
				}
			}
			cout<<ans<<endl;
		}
		x:;
	}
	return 0;
}//O(n^3)

