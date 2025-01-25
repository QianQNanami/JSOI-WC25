#include<bits/stdc++.h>
using namespace std;
bool isprime(int i){
	if(i<=1) return false;
	for(int j=2;j<i;j++){
		if(i%j==0) return false;
	}
	return true;
}
int main(){
	int m,n,s=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(isprime(i)){
			s++;
		}
	}
	cout<<s<<endl;
	return 0;
}
