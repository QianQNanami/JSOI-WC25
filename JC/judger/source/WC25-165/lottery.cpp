#include <bits/stdc++.h>
using namespace std;

bool zs(int x){
	if(x<2) return false;
	for(int i=2;i<=x/2;i++){
		if(x%i==0) return false;
	}
	return true;
}

int main(){
	int m,n,c=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(zs(i)) c++;
	}
	cout<<c;
	return 0;
}
