#include<bits/stdc++.h>
using namespace std;

int main(){
//	int n;
	char a[70];
//	int m;
	char b[70];
	int suma = 0;
	int sumb = 0;
//	cin>>n;
//	cin>>m;
	for(int i = 1;i<=67;i++){
		cin>>a[i];
	}
	for(int i = 1;i<=67;i++){
		cin>>b[i];
	}
	for(int i = 1;i<=67;i++){
		suma*=int(a[i])-64;
	}
	suma=suma%47;
	for(int i = 1;i<=67;i++){
		sumb*=int(b[i])-64;
	}
	sumb=sumb%47;
	if(suma == sumb){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}
	return 0;
} 
