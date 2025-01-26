#include<bits/stdc++.h>
using namespace std;
int n,a[10010],m,l,r;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		a[i]+=a[i-1];
	}
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>l>>r;
		cout<<a[r]-a[l-1]<<endl;
	}
	return 0;
} 
