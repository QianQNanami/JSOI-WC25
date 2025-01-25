#include<bits/stdc++.h>
using namespace std;
int a[101],sum,b[101];
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a,a+n+1);
	for(int i=2;i<=n;i++){
	  b[i]=b[i-1]+a[i-1];
	  sum+=b[i];	
	}
	cout<<sum;
	return 0;
}
