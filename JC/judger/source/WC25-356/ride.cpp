#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	int x=1;
	int t=1;
	getline(cin,a);
	getline(cin,b);
	/*for(int i=1;i<66;i++){
		cin>>a[i];	
	}
	for(int j=1;j<66;j++){
		cin>>b[j];
	}*/ 
	for(int i=1;i<66;i++){
		if(a[i]=='A') x=x*1;if(a[i]=='N') x=x*14;
		if(a[i]=='B') x=x*2;if(a[i]=='O') x=x*15;
		if(a[i]=='C') x=x*3;if(a[i]=='P') x=x*16;
		if(a[i]=='D') x=x*4;if(a[i]=='Q') x=x*17;
		if(a[i]=='E') x=x*5;if(a[i]=='R') x=x*18;
		if(a[i]=='F') x=x*6;if(a[i]=='S') x=x*19;
		if(a[i]=='G') x=x*7;if(a[i]=='T') x=x*20;
		if(a[i]=='H') x=x*8;if(a[i]=='U') x=x*21;
		if(a[i]=='I') x=x*9;if(a[i]=='V') x=x*22;
		if(a[i]=='J') x=x*10;if(a[i]=='W') x=x*23;
		if(a[i]=='K') x=x*11;if(a[i]=='X') x=x*24;
		if(a[i]=='L') x=x*12;if(a[i]=='Y') x=x*25;
		if(a[i]=='M') x=x*13;if(a[i]=='Z') x=x*26;
	}
	for(int j=1;j<66;j++){
		if(b[j]=='A') t=t*1;if(b[j]=='N') t=t*14;
		if(b[j]=='B') t=t*2;if(b[j]=='O') t=t*15;
		if(b[j]=='C') t=t*3;if(b[j]=='P') t=t*16;
		if(b[j]=='D') t=t*4;if(b[j]=='Q') t=t*17;
		if(b[j]=='E') t=t*5;if(b[j]=='R') t=t*18;
		if(b[j]=='F') t=t*6;if(b[j]=='S') t=t*19;
		if(b[j]=='G') t=t*7;if(b[j]=='T') t=t*20;
		if(b[j]=='H') t=t*8;if(b[j]=='U') t=t*21;
		if(b[j]=='I') t=t*9;if(b[j]=='V') t=t*22;
		if(b[j]=='J') t=t*10;if(b[j]=='W') t=t*23;
		if(b[j]=='K') t=t*11;if(b[j]=='X') t=t*24;
		if(b[j]=='L') t=t*12;if(b[j]=='Y') t=t*25;
		if(b[j]=='M') t=t*13;if(b[j]=='Z') t=t*26;
	}
	if(t==x) cout<<"STAY";
	else cout<<"GO";
}
