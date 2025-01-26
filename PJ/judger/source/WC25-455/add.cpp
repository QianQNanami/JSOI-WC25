#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,a[100001]={},s[100001]={},m;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
		s[i]=s[i-1]+a[i];
	}
	cin>>m;
	while(m--){
		long long x,y;
		cin>>x>>y;
		cout<<s[y]-s[x-1];
	}
	return 0;
} 
