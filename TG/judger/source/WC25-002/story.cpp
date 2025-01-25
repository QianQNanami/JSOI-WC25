#include<bits/stdc++.h>
using namespace std;
const int N=500005;
int n,k,m;
int a[N];
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
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
		}
		if(x==2){
			cout<<"-1";
		}
	}
	return 0;
} 
