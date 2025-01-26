#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005],c[100005];
int main(){
	int n,m;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>b[i]>>c[i];
	}
	int ans[100005];
	for(int i=1;i<=m;i++){
		for(int j=b[i];j<=c[i];j++){
			ans[i]+=a[j];
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}
