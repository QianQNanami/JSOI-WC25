#include<bits/stdc++.h>
using namespace std;
bool f(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	int m,n,ans=0;
	cin>>m>>n;
	for(int i=m+1;i<n;i++){
		if(f(i)){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
