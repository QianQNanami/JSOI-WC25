#include<bits/stdc++.h>
using  namespace std;
int a[50005];
int b[35]; 
int main(){
	freopen("story.in","r",stdin);
	
	freopen("story.out","w",stdout);
	ios::sync_with_stdio(0);
    int n,k,m;
    cin>>n>>k>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}   
    while(m--){
    	int x;
    	cin>>x;
    	if(x==1){
    		int p,v;
    		cin>>p>>v;
    		a[p]=v;
		}
		else{
			int ans=0x3f3f3f3f;
			for(int i=1;i<=n;i++){
				memset(b,0,sizeof(b));
				int mina=0;
				for(int j=i;j<=n;j++){
					b[a[j]]++;
					bool f=1;
					for(int t=1;t<=k;t++){
						
						if(b[t]==0){
							f=0;
							break;
						}
					}
					if(f){
						mina=j-i+1;
						ans=min(ans,mina);
						break;
					}
				}
			}
			if(ans==0x3f3f3f3f)cout<<-1<<endl;
			else cout<<ans<<endl;
		}
	}
    return 0;
}
