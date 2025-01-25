#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	long long num1=1,num2=1,i;
	cin>>a>>b;
	for(i=0;i<a.size();i++){
		num1=num1*int(a[i]-64);
	}
	for(i=0;i<b.size();i++){
		num2=num2*int(b[i]-64);
	}
	if(num1%47==num2%47){
		cout<<"GO"<<endl;
	}
	else{
		cout<<"STAY"<<endl;
	}
	return 0;
}
