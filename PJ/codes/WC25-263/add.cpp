#include<bits/stdc++.h>
using namespace std;
int n,m;
long long a[100005];
long long d[100005];
int main(){
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		d[i]=d[i-1]+a[i];
	}
	cin>>m;
	for (int i=1;i<=m;i++){
		int l,r;
		cin>>l>>r;
		cout<<d[r]-d[l-1]<<endl;
	}
	
	return 0;
	
}
