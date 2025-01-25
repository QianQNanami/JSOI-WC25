#include<bits/stdc++.h>
using namespace std;
int n,k,m,a[50005],x,p,s,fp,lp;
bool f[50005];
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(m--){
		cin>>x;
		if(x==1){
			cin>>p>>s;
			a[p]=s;
		}else{
			bool flag=false;
			for(int i=1;i<=k;i++){
				f[i]=false;
			}
			for(int i=1;i<=n;i++){
				f[a[i]]=true;
			}
			for(int i=1;i<=k;i++){
				if(!f[i]){
					flag=true;
					break;
				}
			}
			if(flag){
				cout<<-1<<'\n';
			}else{
				int ans=INT_MAX;
				for(int i=1;i<=n-k+1;i++){
					for(int j=1;j<=k;j++){
						f[j]=true;
					}
					for(int j=i;j<=i+k-1;j++){
						f[a[j]]=false;
					}
					int ak=0;
					for(int j=1;j<=k;j++){
						if(f[j]){
							ak++;
						}
					}
					if(ak==0){
						ans=k;
						break;
					}else{
						for(int j=i+k;j<=n;j++){
							if(f[a[j]]){
								ak--;
								if(ak==0){
									ans=min(j-i+1,ans);
									break;
								}
							}
						}
					}
				}
				cout<<ans<<'\n';
			}
		}
	}
	return 0;
}
