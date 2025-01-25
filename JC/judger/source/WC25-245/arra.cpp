#include<bits/stdc++.h>
using namespace std;
int sum,a[1005];
void w(int n,int m){
	if(n-m==0){
		a[++sum]=n;
		return ;
	}
	if((n-m)%2!=0){
		a[++sum]=n;
		return ;
	}
	w((n-m)/2+m,m);
}
int main(){
	int n,m;
	cin>>n>>m;
	w(n,m);
	cout<<a[sum];
	return 0;
}
