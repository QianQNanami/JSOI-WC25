#include <bits/stdc++.h>
using namespace std;
int a[10010];
int main(){
	int s=0,n,t,i;
	cin>>n>>t;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=2;i<=n;i++){
		s++;
	}
	cout<<s;
	return 0;
}
