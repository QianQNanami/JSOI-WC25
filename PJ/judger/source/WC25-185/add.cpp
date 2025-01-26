#include<iostream>
using namespace std;
int n,m;
int l,r;
long long a[100010];
long long sum[100010];
long long ans[100010];
int main(){
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
		sum[i] =sum[i-1]+a[i];
	}
	cin>>m;
	for(int i = 1;i<=m;i++){
		cin>>l>>r;
		ans[++ans[0]]=sum[r]-sum[l-1];
	}
	for(int i = 1;i<ans[0];i++){
		cout<<ans[i]<<"\n";
	}
	cout<<ans[ans[0]];
	return 0;
}
