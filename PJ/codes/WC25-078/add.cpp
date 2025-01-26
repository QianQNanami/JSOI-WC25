#include<bits/stdc++.h>
using namespace std;
long long a[100010];
int main(){
	long long n,m;
	cin>>n;a[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]=a[i]+a[i-1];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		int l,r;
		cin>>l>>r;
		cout<<a[r]-a[l-1]<<"\n";
	}
}
