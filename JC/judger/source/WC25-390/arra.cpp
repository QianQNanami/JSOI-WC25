#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,k,cnt=0;
	int a;
	cin>>n>>k;
	while(k!=0){
	    if((n-2*k)%2==0){
	    cnt=cnt+k;  	
	 	k--;
	    }
	}
	cout<<cnt;
	return 0;
} 
