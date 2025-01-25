#include <bits/stdc++.h>
using namespace std;
string s,c;
int t=1,n=1;
int main(){
	int i;
	cin>>s>>c;
	for(i=0;i<s.size();i++){
		t*=(s[i]-'@');
	}
	for(i=0;i<c.size();i++){
		n*=(c[i]-'@');
	}
	if(t%47==n%47){
		cout<<"GO";
	}else{
		cout<<"STAY";
	} 
	return 0;
}
