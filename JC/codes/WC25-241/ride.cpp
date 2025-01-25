#include<bits/stdc++.h>
using namespace std;
string s1,s2;
long long ans1=1,ans2=1,x,y;
int main(){
	cin>>s1>>s2;
	for(int i=0;i<s1.size();i++){
		if(s1[i]=='A') x=1;
		if(s1[i]=='B') x=2;
		if(s1[i]=='C') x=3;
		if(s1[i]=='D') x=4;
		if(s1[i]=='E') x=5;
		if(s1[i]=='F') x=6;
		if(s1[i]=='G') x=7;
		if(s1[i]=='H') x=8;
		if(s1[i]=='I') x=9;
		if(s1[i]=='J') x=10;
		if(s1[i]=='K') x=11;
		if(s1[i]=='L') x=12;
		if(s1[i]=='M') x=13;
		if(s1[i]=='N') x=14;
		if(s1[i]=='O') x=15;
		if(s1[i]=='P') x=16;
		if(s1[i]=='Q') x=17;
		if(s1[i]=='R') x=18;
		if(s1[i]=='S') x=19;
		if(s1[i]=='T') x=20;
		if(s1[i]=='U') x=21;
		if(s1[i]=='V') x=22;
		if(s1[i]=='W') x=23;
		if(s1[i]=='X') x=24;
		if(s1[i]=='Y') x=25;
		if(s1[i]=='Z') x=26;;
		ans1*=x;
	}
	for(int i=0;i<s2.size();i++){
		if(s2[i]=='A') y=1;
		if(s2[i]=='B') y=2;
		if(s2[i]=='C') y=3;
		if(s2[i]=='D') y=4;
		if(s2[i]=='E') y=5;
		if(s2[i]=='F') y=6;
		if(s2[i]=='G') y=7;
		if(s2[i]=='H') y=8;
		if(s2[i]=='I') y=9;
		if(s2[i]=='J') y=10;
		if(s2[i]=='K') y=11;
		if(s2[i]=='L') y=12;
		if(s2[i]=='M') y=13;
		if(s2[i]=='N') y=14;
		if(s2[i]=='O') y=15;
		if(s2[i]=='P') y=16;
		if(s2[i]=='Q') y=17;
		if(s2[i]=='R') y=18;
		if(s2[i]=='S') y=19;
		if(s2[i]=='T') y=20;
		if(s2[i]=='U') y=21;
		if(s2[i]=='V') y=22;
		if(s2[i]=='W') y=23;
		if(s2[i]=='X') y=24;
		if(s2[i]=='Y') y=25;
		if(s2[i]=='Z') y=26;
		ans2*=y;
	}
	ans2%=47;
	ans1%=47;
	if(ans1==ans2){
		cout<<"GO";
	}
	else{
		cout<<"STAY";
	}
	return 0;
}
