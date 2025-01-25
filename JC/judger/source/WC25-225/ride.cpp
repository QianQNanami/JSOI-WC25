#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int x,y,z,q;
	x=s1.size();
	y=s2.size();
	for(int i=0;i<=x;i++){
		z*=s1[i]-64;
	}
	for(int i=0;i<=y;i++){
		q*=s2[i]-64;
	}
	if((z%47)!=(q%47))cout<<"GO";
	else cout<<"STAY";
	return 0;
}
