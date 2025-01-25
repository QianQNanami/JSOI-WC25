#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	long long n=1,m=1;
	cin>>a>>b;
	for(int i=1;i<=a.size();i++){
		if(a[i]=='A')n=n*1;
		if(a[i]=='B')n=n*2;
		if(a[i]=='C')n=n*3;
		if(a[i]=='D')n=n*4;
		if(a[i]=='E')n=n*5;
		if(a[i]=='F')n=n*6;
		if(a[i]=='G')n=n*7;
		if(a[i]=='H')n=n*8;
		if(a[i]=='I')n=n*9;
		if(a[i]=='J')n=n*10;
		if(a[i]=='K')n=n*11;
		if(a[i]=='L')n=n*12;
		if(a[i]=='M')n=n*13;
		if(a[i]=='N')n=n*14;
		if(a[i]=='O')n=n*15;
		if(a[i]=='P')n=n*16;
		if(a[i]=='Q')n=n*17;
		if(a[i]=='R')n=n*18;
		if(a[i]=='S')n=n*19;
		if(a[i]=='T')n=n*20;
		if(a[i]=='U')n=n*21;
		if(a[i]=='V')n=n*22;
		if(a[i]=='W')n=n*23;
		if(a[i]=='X')n=n*24;
		if(a[i]=='Y')n=n*25;
		if(a[i]=='Z')n=n*26;
	}
	for(int i=1;i<=b.size();i++){
		if(b[i]=='A')m=m*1;
		if(b[i]=='B')m=m*2;
		if(b[i]=='C')m=m*3;
		if(b[i]=='D')m=m*4;
		if(b[i]=='E')m=m*5;
		if(b[i]=='F')m=m*6;
		if(b[i]=='G')m=m*7;
		if(b[i]=='H')m=m*8;
		if(b[i]=='I')m=m*9;
		if(b[i]=='J')m=m*10;
		if(b[i]=='K')m=m*11;
		if(b[i]=='L')m=m*12;
		if(b[i]=='M')m=m*13;
		if(b[i]=='N')m=m*14;
		if(b[i]=='O')m=m*15;
		if(b[i]=='P')m=m*16;
		if(b[i]=='Q')m=m*17;
		if(b[i]=='R')m=m*18;
		if(b[i]=='S')m=m*19;
		if(b[i]=='T')m=m*20;
		if(b[i]=='U')m=m*21;
		if(b[i]=='V')m=m*22;
		if(b[i]=='W')m=m*23;
		if(b[i]=='X')m=m*24;
		if(b[i]=='Y')m=m*25;
		if(b[i]=='Z')m=m*26;
	}
	if(m==n){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}
	return 0;
}
