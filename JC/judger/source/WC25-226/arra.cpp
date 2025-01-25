#include<bits/stdc++.h>
using namespace std;
int n,k;
int main(){
	cin>>n>>k;
	if(n<k){
		cout<<1<<endl;
	}else{
		if(n%k==0){
			cout<<n/k<<endl;
		}else{
			cout<<n/k+1<<endl;
		}
	}
	return 0;
} 
