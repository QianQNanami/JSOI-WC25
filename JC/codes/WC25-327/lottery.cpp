#include<bits/stdc++.h>
using namespace std;
int m;
int n;
bool gum(int a){
	if(a<=1){
		return false;
	}else if(a==2){
		return true;
	}for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return false;
		}
	}
	return true;
}
int main(){
	cin>>m>>n;
	int ans=0;
	for(int i=m;i<=n;i++){
		if(gum(i)==true){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}

