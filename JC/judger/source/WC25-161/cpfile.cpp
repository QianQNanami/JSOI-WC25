#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,o=0,m;
	cin>>n;
	m=n-1;
	for(int i=1;i<n;i++){
		o+=i*m;
		m--;
	}
	cout<<o;
	return 0;
}
