#include <bits/stdc++.h>
using namespace std;
bool isprime(int x){
	if(x<2){
		return 0;
	}
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int m,n,cnt=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(isprime(i)){
			cnt++;
		}
	}
	cout<<cnt<<endl;
	return 0;
}

