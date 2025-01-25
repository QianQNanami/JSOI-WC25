#include <bits/stdc++.h>
using namespace std;
int arra(int n,int k){
	if((n-k)%2==0){
		return arra((n-k)/2,k)+arra((n+k)/2,k);
	}
	else{
		return 1;
	}
}
int main(){
	int n,k;
	cin>>n>>k;
	cout<<arra(n,k);
	return 0;
}

