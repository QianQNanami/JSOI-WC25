#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100],n; 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	a[i]=a[i]+a[i-1];
	cout<<a[i];
	return 0;
}
