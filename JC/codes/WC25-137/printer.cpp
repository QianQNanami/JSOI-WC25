#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t,a[1010],c;
	cin>>n>>t;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			c=max(a[i],a[j]);
		}
	}
	cout<<n-t-1;
	return 0;
}
