#include<bits/stdc++.h>
using namespace std;
int is_prime(int n){
	if(n<=1){
		return false;
	}
	for(int i=2;i<=n/i;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int n,m,s=0;
	cin>>n>>m;
	for(int i=n;i<=m;i++){
		if(is_prime(i)){
			s++;
		}
	}
	cout<<s;
	return 0;
}
