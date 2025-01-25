#include<bits/stdc++.h>
using namespace std;
int main(){
	char x;
	int xnum=1;
	x=getchar();
	while(x!='\n'){
		//switch
		if(x=='A') xnum=xnum*1;
		if(x=='B') xnum=xnum*2;
		if(x=='C') xnum=xnum*3;
		if(x=='D') xnum=xnum*4;
		if(x=='E') xnum=xnum*5;
		if(x=='F') xnum=xnum*6;
		if(x=='G') xnum=xnum*7;
		if(x=='H') xnum=xnum*8;
		if(x=='I') xnum=xnum*9;
		if(x=='J') xnum=xnum*10;
		if(x=='K') xnum=xnum*11;
		if(x=='L') xnum=xnum*12;
		if(x=='M') xnum=xnum*13;
		if(x=='N') xnum=xnum*14;
		if(x=='O') xnum=xnum*15;
		if(x=='P') xnum=xnum*16;
		if(x=='Q') xnum=xnum*17;
		if(x=='R') xnum=xnum*18;
		if(x=='S') xnum=xnum*19;
		if(x=='T') xnum=xnum*20;
		if(x=='U') xnum=xnum*21;
		if(x=='V') xnum=xnum*22;
		if(x=='W') xnum=xnum*23;
		if(x=='X') xnum=xnum*24;
		if(x=='Y') xnum=xnum*25;
		if(x=='Z') xnum=xnum*26;
		x=getchar();
		} 
	char y;
	int ynum=1;
	y=getchar();
	while(y!='\n'){
		//switch
		if(y=='A') ynum=ynum*1;//
		if(y=='B') ynum=ynum*2;//
		if(y=='C') ynum=ynum*3;//
		if(y=='D') ynum=ynum*4;//
		if(y=='E') ynum=ynum*5;//
		if(y=='F') ynum=ynum*6;//
		if(y=='G') ynum=ynum*7;//
		if(y=='H') ynum=ynum*8;//
		if(y=='I') ynum=ynum*9;//
		if(y=='J') ynum=ynum*10;//
		if(y=='K') ynum=ynum*11;//
		if(y=='L') ynum=ynum*12;//
		if(y=='M') ynum=ynum*13;//
		if(y=='N') ynum=ynum*14;//
		if(y=='O') ynum=ynum*15;//
		if(y=='P') ynum=ynum*16;//
		if(y=='Q') ynum=ynum*17;//
		if(y=='R') ynum=ynum*18;//
		if(y=='S') ynum=ynum*19;//
		if(y=='T') ynum=ynum*20;//
		if(y=='U') ynum=ynum*21;//
		if(y=='V') ynum=ynum*22;//
		if(y=='W') ynum=ynum*23;//
		if(y=='X') ynum=ynum*24;//
		if(y=='Y') ynum=ynum*25;//
		if(y=='Z') ynum=ynum*26;//
		y=getchar();
		//ʱ�䳤 
	}
	cout<<xnum<<" "<<ynum;
	if(xnum==ynum){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}


	return 0;
} 

