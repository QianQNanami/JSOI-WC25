#include<bits/stdc++.h>
using namespace std;
int sum;
int a[1001];
void  work(int n,int k) {
	
	if(n-k==0){
		a[++sum]=n;
		return ;
	}
	if((n-k)%2!=0){
		a[++sum]=n;
		return ;
	}
	work((n-k)/2+k,k);
	
	
	
}
int main() {
	int n,k;
	cin>>n>>k;
	work(n,k);
	cout<<a[sum];
	
	return 0;
}
