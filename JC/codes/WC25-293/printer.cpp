#include<bits/stdc++.h>
using namespace std;
int a[1001];
int main(){
int n,mabx=0,t;
	cin>>n>>t;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(mabx<a[i]){
			mabx=a[i];
		}
	}
	cout<<mabx<<endl;
	if(a[t]<=mabx){
		cout<<n-1;
	}else{
		cout<<1;
	}
	return 0;
}
