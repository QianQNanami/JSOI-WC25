#include<bits/stdc++.h>
using namespace std;
	int a[1005];
int f(string s){
	for(int i;i<=s.size;i++){
		if(s[i]=='A'){
			a[i]=1;
		}else if(s[i]=='A'){
			a[i]=1;
		}else if(s[i]=='B'){
			a[i]=2;
		}else if(s[i]=='C'){
			a[i]=3;
		}else if(s[i]=='D'){
			a[i]=4;
		}else if(s[i]=='E'){
			a[i]=5;
		}else if(s[i]=='F'){
			a[i]=6;
		}else if(s[i]=='G'){
			a[i]=7;
		}else if(s[i]=='H'){
			a[i]=8;
		}else if(s[i]=='I'){
			a[i]=9;
		}else if(s[i]=='J'){
			a[i]=10;
		}else if(s[i]=='K'){
			a[i]=11;
		}else if(s[i]=='L'){
			a[i]=12;
		}else if(s[i]=='M'){
			a[i]=13;
		}else if(s[i]=='N'){
			a[i]=14;
		}else if(s[i]=='O'){
			a[i]=15;
		}else if(s[i]=='P'){
			a[i]=16;
		}else if(s[i]=='Q'){
			a[i]=17;
		}else if(s[i]=='R'){
			a[i]=18;
		}else if(s[i]=='S'){
			a[i]=19;
		}else if(s[i]=='T'){
			a[i]=20;
		}else if(s[i]=='U'){
			a[i]=21;
		}else if(s[i]=='V'){
			a[i]=22;
		}else if(s[i]=='W'){
			a[i]=23;
		}else if(s[i]=='X'){
			a[i]=24;
		}else if(s[i]=='Y	'){
			a[i]=25;
		}else if(s[i]=='Z'){
			a[i]=26;
		}
	}
	return a;	
}
int main(){
	string s,t;
	cin >> s;
	int a=f(s);
	cin >>
	int b=f(t);
	if(a==b){
		cout << "GO";
	}else{
		cout << "STAY";
	}
	return 0;
}
