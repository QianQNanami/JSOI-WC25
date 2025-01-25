#include<bits/stdc++.h>
using namespace std;
int n,a[10005],k,ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	k=n-1;
	for(int i=1;i<=n;i++){
		ans+=a[i]*k;
		k--;
	}
	cout<<ans;
	return 0;
}
