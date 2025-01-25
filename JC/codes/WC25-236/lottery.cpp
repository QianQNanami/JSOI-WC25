#include<bits/stdc++.h>
using namespace std;
bool x(int n){
	if(n==1){
		return 0;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n,m,sum=0;
	cin >> n >> m;
	for(int i=n;i<=m;i++){
		if(x(i)){
			sum++;
		}
	}
	cout << sum; 
	
	return 0;
}
