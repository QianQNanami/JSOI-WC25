#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[100010],b[100010],ans[100010];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) b[i]=b[i-1]+a[i];
	cin>>m;
	for(int i=1;i<=n;i++){
		int l,r;
		cin>>l>>r;
		ans[i]=b[r]-b[l-1];
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<endl;
	return 0;
}
