#include <bits/stdc++.h>
using namespace std;
int a[105];
int main( ){
	int n,t=0,i;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1)
	for(i=2;i<=n;i++){
		for(int j=1;j<i;j++){
			t+=a[j];
		}
	}
	cout<<t<<endl;
	return 0;
}
