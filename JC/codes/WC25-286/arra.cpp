#include<bits/stdc++.h>
using namespace std;
int f(int n,int k){
	if(n<=k+1||(n-k)%2==1){
		return 1;
	}else{
		return f((n-k)/2,k)+f((n-k)/2+k,k);
	}
}
int main(){
	int n,k;
	cin>>n>>k;
	cout<<f(n,k);
	return 0;
}
