#include <bits/stdc++.h>
using namespace std;
int n,k;
int main(){
	cin>>n>>k;
	if(n<k){
		cout<<1;
	}else{
		if(n%k==0){
			cout<<n/k;
		}else{
			cout<<n/k+1; 
		}
	}
	return 0;
}
