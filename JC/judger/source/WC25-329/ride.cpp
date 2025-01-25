#include<bits/stdc++.h>
using namespace std;
int f(char c){
	return c-64;
}
string s1,s2;
int main(){
	cin>>s1>>s2;
	int k1=1,k2=1;
	for(int i=0;i<s1.size();i++){
		k1=k1*f(s1[i]);
	}
	for(int i=0;i<s2.size();i++){
		k2=k2*f(s2[i]);
	}
	if(k2%47==k1%47){
		cout<<"GO";
	}
	else{
		cout<<"STAY";
	}
	
	return 0;
}
