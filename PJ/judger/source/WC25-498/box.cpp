#include<bits/stdc++.h>
using namespace std;
bool go;
int main() {
begin:
	long long _1,_2,_3,_4,_5,_6;
	cin>>_1>>_2>>_3>>_4>>_5>>_6;
	go=_1!=0||_2!=0||_3!=0||_4!=0||_5!=0||_6!=0;
	if(go)cout<<(_1+_2*4+_3*9+_4*16+_5*25+_6*36)/36+((_1+_2*4+_3*9+_4*16+_5*25+_6*36)%36>0);
	if(go) goto begin;
	return 0;
}
