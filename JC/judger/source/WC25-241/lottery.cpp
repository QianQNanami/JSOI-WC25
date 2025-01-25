#include<bits/stdc++.h>
using namespace std;
bool is_pr(int x){
	if(x==1){
		return false;
	}
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			return false;
		}
	}
	return true;
}
int n,m,ans;
int main(){
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(is_pr(i)){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
