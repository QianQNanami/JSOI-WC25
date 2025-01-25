#include <bits/stdc++.h>
using namespace std;
const int MAXN=5e4+10;
int a[MAXN]; 
bool vis[MAXN];
int n,k,m;
int solve(){
	int ans=0x3f3f3f3f;
	bool flag=false;
	for(int i=1;i<=n;i++){
		memset(vis,0,sizeof(vis));
		int cnt=0;
		for(int j=i;j<=n;j++){
			if(!vis[a[j]]){
				cnt++;
				vis[a[j]]=true;
				if(cnt==k) {
					ans=min(ans,j-i+1);
					flag=true;
				}
			}
		}
		
	}
	if(flag) return ans;
	else return -1;
}
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(m--){
		int op;
		cin>>op;
		if(op==1){
			int p,v;
			cin>>p>>v;
			a[p]=v;
		}
		else if(op==2){
			cout<<solve()<<endl; 
		}
	}
	return 0;
}

