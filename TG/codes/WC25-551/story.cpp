#include <bits/stdc++.h>
using namespace std;
int a[50005];
set<int>st;
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	int n,k,m;
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	while(m--){
		char op;
		cin>>op;
		if(op=='1'){
			int p,v;
			cin>>p>>v;
			a[p]=v;
		} else {
			int ans=INT_MAX;
			for(int i=1;i<=n;i++){
				st.clear();
				for(int l=1;l<=n-i+1;l++){
					for(int s=1;s<=l;s++){
						st.insert(a[i+s-1]);
					}
					if(st.size()==k) ans=min(ans,l);
				}
			}
			if(ans!=INT_MAX) cout<<ans<<endl;
			else cout<<-1;
		}
	}
	return 0;
}
