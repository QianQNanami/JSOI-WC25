#include<bits/stdc++.h>
using namespace std;
int n,k;
int f(int n,int k){
	if((n-k)%2!=0&&(n+k)%2!=0){
		return 1;
	}
	if(n-k==0){
		return 1;
	}
	return f((n+k)/2,k)+f((n-k)/2,k);
}
int main(){
	cin>>n>>k;
	cout<<f(n,k);
	return 0;
}
