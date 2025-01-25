#include<bits/stdc++.h>
using namespace std;
string x,y;
int main(){
	int a=1,b=1;
	cin>>x>>y;
	for(int i=0;i<x.size();i++){
		a=(int(x[i]-64))*a;
		a=a%47;
	}
	for(int j=0;j<y.size();j++){
		b=(int(y[j]-64))*b;
		b=b%47;
	}
	if(a==b){
		cout<<"GO";
	}
	else{
		cout<<"STAY";
	}
	return 0;
}

