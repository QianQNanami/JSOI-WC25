#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	if(n<2) return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int a,b,summ=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
    	if(isPrime(i)) summ++;
	}
	cout<<summ;
	return 0; 
}
