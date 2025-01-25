#include<bits/stdc++.h>
using namespace std;
int k;
int rar(int n){
	int s=0;
	if(n<=k+1||n%2!=0){
		return 1;
	}
	else{
		s=s+rar((n-k)/2+k)+rar((n-k)/2);
	}
}
int main(){
	int n;
	cin>>n>>k;
	
	cout<<rar(n);
	return 0;
}
