#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAXN=5e4+50;
int n,k,m,a[MAXN];
int h[35],hs[35];
signed main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(m--){
		int t;
		cin>>t;
		if(t==1){
			int p,v;
			cin>>p>>v;
			a[p]=v;
		}
		else{
			int cnt=0;
			memset(h,0,sizeof(h));
			for(int i=1;i<=n;i++){
				h[a[i]]++;
				if(h[a[i]]==1){
					cnt++;
				}
			}
			if(cnt!=k){
				cout<<-1<<endl;
				continue;
			}
			int sum,num,ans=0x3f;
			for(int i=n;i>=1;i--){
				for(int j=1;j<=n;j++){
					if(i==j){
						break;
					}
					sum=0,num=0;
					memset(hs,0,sizeof(hs));
					for(int s=j;s<=i;s++){
						if(num==k){
							break;
						}
						hs[a[s]]++;
						if(hs[a[s]]==1){
							num++;
						}	
						sum++;
								
					}
					ans=min(ans,sum);
				}
			}
			cout<<ans<<endl;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
