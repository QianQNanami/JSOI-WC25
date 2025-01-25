#include<bits/stdc++.h>
using namespace std;
int A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U,V,W,X,Y,Z;
int y,t;
char a;
char b;
int main(){
	cin>>a>>b;
	a<=66;
	b<=66;
	A=1;
	B=2;
	C=3;
	D=4;
	E=5;
	F=6;
	G=7;
	H=8;
	I=9;
	J=10;
	K=11;
	L=12;
	M=13;   
	N=14;
	O=15;
	P=16;
	Q=17;
	R=18;
	S=19;
	T=20;
	U=21;
	V=22;
	W=23;
	X=24;
	Y=25;
	Z=26;
	y=a/10%100*(b/10%100);
	t=a/10%100*(b/10%100);
	if(y=t){
		cout<<"GO";
	}
	else{
		cout<<"STAY";
	}
	return 0;
}
