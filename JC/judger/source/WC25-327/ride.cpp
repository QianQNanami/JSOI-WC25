#include<bits/stdc++.h>
using namespace std;
string a;
string b;
int num(string a){
	int s=1;
	for(int i=1;i<=a.size();i++){
		s=(a[i]-'0'+49)*s;
	}
	return s;
}
int main(){
	cin>>a;
	cin>>b;
	if(num(a)==(num(b)%47)){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}
	cout<<num(a);
	return 0;
}

