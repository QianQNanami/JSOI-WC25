#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,ans,t,a[1000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		a[i]=t;
}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if (a[j]>a[j+1]) swap(a[j],a[j+1]);
	}
}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			ans+=a[j];
		}
	}
	cout<<ans;
	return 0;
}
