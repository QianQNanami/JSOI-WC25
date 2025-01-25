#include<bits/stdc++.h>
using namespace std;
int main(){
	int a=0,b=0,c=0,d=0,e=0,f=0;
	string x,y;
	cin>>x>>y;
	for(int i=0;i<=x.size();i++){
		a=x[i]+1-'A';
		c*=a;
	}
	for(int i=0;i<=y.size();i++){
		b=y[i]+1-'A';
		d*=b;
	}
	e=c*47;
	f=d*47;
	if(e!=f) cout<<"STAY";
	else cout<<"GO";
	return 0;
} 
