#include<bits/stdc++.h>
using namespace std;
int n,k,m,a[50005];
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		int x;
		cin>>x;
		if(x==1){
			int p,v;
			cin>>p>>v;
			a[p]=v;
		}else{
			cout<<-1;
		}
	}
	return 0;
}
