#include<bits/stdc++.h>
using namespace std;
int n,a[100005],ans;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	while(n-- and n>0){
		for(int i=1;i<=n;i++){
			ans=ans+a[i];
		}
	}
	cout<<ans<<endl;
	return 0;
}
