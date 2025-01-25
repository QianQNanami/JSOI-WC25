#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,k,a=0;
	cin>>n>>k;
	for(int i=0;i<=n;i++){
	    if((n-k)%2!=0){
		    a++;
	    }else{
	    	n/2;
		}	
	}
	cout<<a;
	return 0;
}
