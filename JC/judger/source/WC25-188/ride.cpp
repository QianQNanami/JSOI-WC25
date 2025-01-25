#include<bits/stdc++.h>
using namespace std;
int main(){
	string n,m;
	int k=1,e=1;
	getline(cin,n);
	getline(cin,m);
	for(int i=1;i<=n.size();i++){
		k=k*(n[i]-39);
	}
	k=k%47;
	for(int i=1;i<=m.size();i++){
		e=e*(n[i]-39);
	}
	e=e%47;
	if(e==k){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}
} 
