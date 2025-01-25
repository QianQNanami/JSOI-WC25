#include<bits/stdc++.h>
using namespace std;
int main(){
	int a1=1,b1=1;
	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.size();i++){
		a1*=a[i]+1-'A';
	}
	for(int i=0;i<b.size();i++){
		b1*=b[i]+1-'A';
	}
	if(a1%47==b1%47){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}
	return 0;
}
