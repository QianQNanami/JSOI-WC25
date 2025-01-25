#include<bits/stdc++.h>
using namespace std;
int n,k,m;
int a[500005];
bool vis[500005];
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=1;i<=m;i++){
		int x;
		cin>>x;
		if(x<2){
			int p,v;
			scanf("%d%d",&p,&v);
			a[p]=v;
		}else{
			int ans=1145141919;
			for(int st=1;st<=n;st++){
				for(int ed=st+1;ed<=n;ed++){
					memset(vis,0,sizeof(vis));
					for(int j=st;j<=ed;j++){
						vis[a[j]]=1;
						bool f=0;
						for(int c=1;c<=k;c++){
							if(!vis[c]){
								f=1;
								break;
							}
						}
						if(f==0){
							ans=min(ans,j-st+1);
							break;
						}
					}
				}
			}
			if(ans>50005){
				printf("-1\n"); 
			}else{
				printf("%d\n",ans);
			} 
		}
	}
	return 0;
}

