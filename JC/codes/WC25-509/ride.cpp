#include<bits/stdc++.h>
using namespace std;
string a;
string b;
int f(string n){
	int ans=0;
	for(int i=0;i<n.size();i++){
		ans*=char(n[i]);
	}
	return ans;
}
int main(){
	getline(cin,a);
	getline(cin,b);
	if(f(a)%47==f(b)%47){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}
	return 0;
}
