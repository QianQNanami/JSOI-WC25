#include<bits/stdc++.h>
using namespace std;
int rid(string s){
	int x=1;
	for(int i=0;i<=s.size()-1;i++){
		x*=int(s[i])-64;
	}
	return x%47;
}
int main(){
	string s,n;
	cin>>s>>n;
	if(rid(s)==rid(n)){
		cout<<"GO";
	}
	else{
		cout<<"STAY";
	}
	return 0;
}
