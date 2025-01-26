#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,l,r;
	cin>>n;
	int a[n+10],s[n+10];
	s[0]=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=s[i-1]+a[i];
	}
	cin>>m;
	while(m--){
		cin>>l>>r;
		cout<<s[r]-s[l-1]<<endl;
	}
	return 0;
} 
