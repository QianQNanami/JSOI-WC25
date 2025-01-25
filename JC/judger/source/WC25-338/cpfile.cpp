#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
    int a[1005];
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(a[n]<=a[n-1]){
			swap(a[n],a[n-1]);
		}
	}
	for(int i=1;i<=n;i++){
		ans=ans+a[i]*(n-i);
	}
	cout<<ans<<endl;
	return 0;
}

