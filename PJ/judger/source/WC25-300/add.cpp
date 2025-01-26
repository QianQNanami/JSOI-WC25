#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[10001];
int ans[10001];

int main(){
	freopen("add.in","r",stdin);
	freopen("add.out","w",stdout);
	
	cin>>n;
	cin>>a[1];
	for(int i=2;i<=n;i++){
		cin>>a[i];
		a[i]=a[i]+a[i-1];
	}
	
	cin>>m;
	for(int i=1;i<=m;i++){
		int x,y;
		cin>>x>>y;
		ans[i]=a[y]-a[x-1];
	}
	
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<endl;
	
	return 0;
}
