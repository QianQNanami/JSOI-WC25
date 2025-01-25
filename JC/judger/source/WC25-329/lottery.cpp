#include<bits/stdc++.h>
using namespace std;
bool f(int x){
	if(x==1) return 0;
	else if(x==2) return 1;
	else{
		for(int i=2;i<=sqrt(x);i++){
			if(x%i==0){
				return 0;
			}
		}
	}
	return 1;
}

int main(){
	int m,n,s=0;;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(f(i)==1){
			s++;
		}
	}
	cout<<s;
	return 0;
}
