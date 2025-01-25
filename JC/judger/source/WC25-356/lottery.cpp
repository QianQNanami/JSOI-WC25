#include<bits/stdc++.h>
using namespace std;
int a(int x){
	int z=0;
	for(int i=1;i<=x;i++){
		if(x%i==0){
			z++;
		}
	}
	if(z>3){
		return true;
	}else{
		return false;
	}
}
int main(){
	int n,m,s=0;
	cin>>n>>m;
	for(int i=1;i<=n&&i<=m;i++){
		if(a(i)==0){
			s++;
		}
	}
	cout<<s;
	return 0;
}
