#include<bits/stdc++.h>
using namespace std;
const int N = 5e5+5;
int a[N];
int n,m,k;
int check(){
	map<int,bool> mp;
	for(int i = 1;i<=n;i++){
		mp[a[i]] = 1;
		bool f=1;
		for(int j = 1;j<=k;j++){
			if(mp[j] == 0) f=0;
		}
		if(f) return i;
	}
	return -1;
}
int main(){
	
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	
	cin>>n>>k>>m;
	for(int i= 1;i<=n;i++) cin>>a[i];
	while(m--){
		int op;
		cin>>op;
		if(op == 1){
			int x,y;
			cin>>x>>y;
			a[x] = y; 
		}else{
			
			cout<<check();
						
		}
	}
	return 0;
}
