#include<bits/stdc++.h>
using namespace std;
int a[100005],s[100005];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s[i]=a[i]+s[i-1];
	}
	int m;
	cin>>m;
	while(m--){
		int l,r;
		cin>>l>>r;
		cout<<s[r]-s[l-1]<<endl; 
	}
	return 0;
}
