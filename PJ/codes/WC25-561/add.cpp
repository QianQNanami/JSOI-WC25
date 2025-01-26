#include <bits/stdc++.h>
using namespace std;
int n;
int m;
long long a[100005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		int l,r;
		cin>>l>>r;
		cout<<a[r]-a[l-1]<<endl; 
	}
	return 0;
}
