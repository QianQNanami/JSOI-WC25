#include<iostream>
using namespace std;
int main(){
	string a,b;
	int A=1,B=1;
	cin>>a>>b;
	for(int i=0;i<a.size();i++){
		A*=a[i]-64;
		B*=b[i]-64;
	}
	if(A%47==B%47)
		cout<<"GO";
	else
		cout<<"STAY";
	return 0; 
} 
