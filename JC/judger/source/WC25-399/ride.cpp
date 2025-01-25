#include<bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long s1=1,s2=1,l;
	string a,b;
	cin>>a>>b;
	l=a.size();
	for(int i=0;i<l;i++){
		s1*=a[i]-'A'+1;
	}
	l=b.size();
	for(int i=0;i<l;i++){
		s2*=b[i]-'A'+1;
	}
	if(s1%47==s2%47){
		cout<<"GO";
	}
	else{
		cout<<"STAY";
	}
	return 0;
} 
