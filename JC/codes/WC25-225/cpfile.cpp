#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t[n];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>t[i];
	}
	cout<<n*t[n]-(n-4);
	return 0;
}
