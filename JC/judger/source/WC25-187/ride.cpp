#include<bits/stdc++.h>
using namespace std;
int a[70],b[70]; 
int main(){
	for(int i=1;i<=66;i++){
		cin>>a[i];
		cin>>b[i]; 
	}
	if(a[i]*a[i-1]==b[i]*b(i-1)){
		cout<<"GO";
	}
	else{
		cout<<"STAY";
	}
	return 0;
}
