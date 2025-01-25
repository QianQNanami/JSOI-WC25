#include<bits/stdc++.h>
using namespace std;
char ast(string a,int s=1){
	for(int i=1;i<a.size()+1;i++){
		if(a[i]=='A'){
			s*=1;
		}else if(a[i]=='B'){
			s*=2;
		}else if(a[i]=='C'){
			s*=3;
		}else if(a[i]=='D'){
			s*=4;
		}else if(a[i]=='E'){
			s*=5;
		}else if(a[i]=='F'){
			s*=6;
		}else if(a[i]=='G'){
			s*=7;
		}else if(a[i]=='H'){
			s*=8;
		}else if(a[i]=='I'){
			s*=9;
		}else if(a[i]=='J'){
			s*=10;
		}else if(a[i]=='K'){
			s*=11;
		}else if(a[i]=='L'){
			s*=12;
		}else if(a[i]=='M'){
			s*=13;
		}else if(a[i]=='N'){
			s*=14;
		}else if(a[i]=='O'){
			s*=15;
		}else if(a[i]=='P'){
			s*=16;
		}else if(a[i]=='Q'){
			s*=17;
		}else if(a[i]=='R'){
			s*=18;
		}else if(a[i]=='S'){
			s*=19;
		}else if(a[i]=='T'){
			s*=20;
		}else if(a[i]=='U'){
			s*=21;
		}else if(a[i]=='V'){
			s*=22;
		}else if(a[i]=='W'){
			s*=23;
		}else if(a[i]=='X'){
			s*=24;
		}else if(a[i]=='Y'){
			s*=25;
		}else if(a[i]=='Z'){
			s*=26;
		}
		return s;
	}
}
char sft(string b,int g=1){
	for(int i=1;i<b.size()+1;i++){
		if(b[i]=='A'){
			g*=1;
		}else if(b[i]=='B'){
			g=2;
		}else if(b[i]=='C'){
			g*=3;
		}else if(b[i]=='D'){
			g*=4;
		}else if(b[i]=='E'){
			g*=5;
		}else if(b[i]=='F'){
			g*=6;
		}else if(b[i]=='G'){
			g*=7;
		}else if(b[i]=='H'){
			g*=8;
		}else if(b[i]=='I'){
			g*=9;
		}else if(b[i]=='J'){
			g*=10;
		}else if(b[i]=='K'){
			g*=11;
		}else if(b[i]=='L'){
			g*=12;
		}else if(b[i]=='M'){
			g*=13;
		}else if(b[i]=='N'){
			g*=14;
		}else if(b[i]=='O'){
			g*=15;
		}else if(b[i]=='P'){
			g*=16;
		}else if(b[i]=='Q'){
			g*=17;
		}else if(b[i]=='R'){
			g*=18;
		}else if(b[i]=='S'){
			g*=19;
		}else if(b[i]=='T'){
			g*=20;
		}else if(b[i]=='U'){
			g*=21;
		}else if(b[i]=='V'){
			g*=22;
		}else if(b[i]=='W'){
			g*=23;
		}else if(b[i]=='X'){
			g*=24;
		}else if(b[i]=='Y'){
			g*=25;
		}else if(b[i]=='Z'){
			g*=26;
		}
		return g;
	}
}
int main(){
	string a,b;
	cin>>a>>b;
	if(ast(a)==sft(b)){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}
	return 0;
}

