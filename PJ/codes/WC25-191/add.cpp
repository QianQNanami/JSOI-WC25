#include<bits/stdc++.h>
using namespace std;
long long a[100005];
long long n,m;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]=a[i]+a[i-1];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		long long l,r;
		cin>>l>>r;
		cout<<a[r]-a[l-1]<<endl;
	}
	return 0;
}
