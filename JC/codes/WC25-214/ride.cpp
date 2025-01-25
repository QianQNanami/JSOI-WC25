#include<bits/stdc++.h>
using namespace std;
int main(){
	int c=1,d=1,e=0,f=0;
	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.size();i++){
		e=a[i]-'A'+1;
		c=c*e;
		e=0;
	}
	for(int i=0;i<b.size();i++){
		f=b[i]-'A'+1;
		d=d*f;
		f=0;
	}
	if(c%47==d%47)
	cout<<"GO";
	if(c%47!=d%47)
	cout<<"STAY";
	return 0;
}
