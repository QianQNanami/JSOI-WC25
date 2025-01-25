#include<bits/stdc++.h>
using namespace std;
int n;
int a[10005];
int ans=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	a[0]=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i]<a[j-1]){
				swap(a[j],a[j-1]);
			}
		}
	}
	for(int i=2;i<=n;i++){
		for(int j=0;j<i;j++){
			ans=ans+a[j];
		}
	}
	cout<<ans;
	return 0;
}

