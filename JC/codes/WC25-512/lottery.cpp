#include <bits/stdc++.h>
using namespace std;
int main( ){
	int m,n,k,t=1;
	cin>>n>>m;
	for(int i=n;i<=m;i++){
		        k=i;
		for(int i=2;i*i<=m;i++){
	        if(n%i==0){
	         t++;
	        }
	    }
    }	
    cout<<t<<endl;
	return 0;
}
