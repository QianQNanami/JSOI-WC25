#include<bits/stdc++.h>
using namespace std;
int n,k,s;
int z(int n,int k){
	for(int i=1;i<n;i++){
	if(i+k==n-i||n-i+k==i){
			return z(i,k)+z(n-i,k);
	}
    }
	
			return 1;
    }
int main(){
	cin>>n>>k;
	cout<<z(n,k);
	
	

	return 0;
} 
