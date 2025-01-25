#include<bits/stdc++.h>
using namespace std;
int a[10010];
int main () {
	int n,t,i,s=0;
	cin>>n>>t;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=2;i<=n;i++){
		s++;
	}
	cout<<s<<endl;
	return 0;
}
