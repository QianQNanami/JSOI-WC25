#include <bits/stdc++.h>
using namespace std;
int n;int a[50005]={},k,m,b,p,v; 
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
	}
	for(int i=1;i<=m;++i){
		cin>>b;
		if(b==1)cin>>p>>v;
		if(b==2)cout<<"-1"<<endl;
	}
	return 0;
}
