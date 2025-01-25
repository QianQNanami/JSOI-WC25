#include<bits/stdc++.h>
using namespace std;
bool zs(int a){
	if(a==1){
		return true;
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return true;
		}
	}
	return false;
}
int main(){
	int m,n,ans=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(zs(i)==false){
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
} 
