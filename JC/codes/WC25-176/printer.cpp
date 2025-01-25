#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,t;
	cin>>n>>t;
	for(int i=0;i<=n;i++){
		cin>>n[i-1];
	}
	for(int i=0;i<=n;i++){
		cout<<n[i]+n[i+1];
	}
	return 0;
}
