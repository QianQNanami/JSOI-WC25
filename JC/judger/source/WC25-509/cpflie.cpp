#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,max=0,ans=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<n;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
	for(int i=1;i<=n;i++){
		ans+=a[n-i]*i;
	}
	cout<<ans;
	return 0;
}
