#include<bits/stdc++.h>
using namespace std;
int n,k;
int ans=0;
int lzy(int n,int k){
	if((n-k)%2!=0||n==1){
		return 1;
	}else{
		return lzy((n-k)/2,k)+lzy((n-k)/2+k,k);
	}
}
int main(){
	cin>>n>>k;
	cout<<lzy(n,k);
	return 0;
}
/*  	   6(3)
		  / \
		((6-2)%2==0   
		4(2)  2(1
	  / \      
	3(1) 1(1)  
	
	
	
	
	
*/    
