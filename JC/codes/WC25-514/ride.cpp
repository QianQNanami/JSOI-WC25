#include<bits/stdc++.h>
using namespace std;
string s,c;
int t=1,y=1;
int main(){
	int i;
	cin>>s>>c;
	for(i=0;i<s.size();i++){
		t=t*(s[i]-'@');
	}
	for(i=0;i<c.size();i++){
		y=y*(c[i]-'@');
	}
	if(t%47==y%47){
		cout<<"GO"<<endl;
	}else{
		cout<<"STAY"<<endl;
	}
	
	return 0;
}
