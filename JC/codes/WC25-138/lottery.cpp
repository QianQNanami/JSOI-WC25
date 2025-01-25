#include<bits/stdc++.h>
using namespace std;
int ans=0;
bool panguan(int x){
	if(x==1){
		return false;
	}
	for(int i=2;i<x;i++){
		if(x%i==0){
			return false;
		}
	}	
	return true;	
}
int main(){
	int m,n;
	cin>>m>>n;
	if(m>1000000&&n>1000000){
		cin>>m>>n;
	}
	for(int i=m;i<=n;i++){
		if((panguan(i))==true){
		    ans++;  	
		}
	}
	cout<<ans;
	return 0;
}
