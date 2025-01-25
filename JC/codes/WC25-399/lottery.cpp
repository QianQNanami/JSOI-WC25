#include<bits/stdc++.h>
using namespace std;
bool p(int a){
	if(a<=1){
		return 0;
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		} 
	}
	return 1;
}
int main(){
	int n,m,s=0;
	cin>>n>>m;
	for(int i=n;i<=m;i++){
		if(p(i)){
			s++;
		}
	}
	cout<<s;
	return 0;
} 
