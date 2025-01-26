#include<bits/stdc++.h>
using namespace std;
int a[100010];
int main(){
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		long long ans=0;
		int x,y;
		cin>>x>>y;
		for(int j=x;j<=y;j++){
			ans+=a[j];
		}
		cout<<ans<<endl;
	}
	return 0;
}
