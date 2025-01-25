#include<bits/stdc++.h>
using namespace std;
string s,c;
int t=1,n=1;
int main () {
	int i;
	cin>>s>>c;
	for(i=0;i<s.size();i++){
		t=t*(s[i]-'@');
	}
	for(i=0;i<c.size();i++){
		n=n*(c[i]-'@');
	}
	if(n%47==t%47){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}
	return 0;
}
