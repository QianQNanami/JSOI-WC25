#include<bits/stdc++.h>
using namespace std;
int a[50001];

int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","W",stdout);
	ios::sync_with_stdio(0);
	int n,k,m;
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(m--){
		int c;
		cin>>c;
		if(c==1){
			int p,v;
			cin>>p>>v;
			a[p]=v;
		}else if(c==2){
		    for(int i=1;i<=n;i++){
			    if(st.size()==k){
		    	    cout<<i<<endl;
		    	    break;
				}
			}	
		}
	}
	return 0;
}
