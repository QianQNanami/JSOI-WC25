#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a[10002],ans=0,i,j;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	for(i=1;i<=n;i++){
		ans+=(n-i)*a[i];
	}
	cout<<ans<<endl;
	return 0;
}
