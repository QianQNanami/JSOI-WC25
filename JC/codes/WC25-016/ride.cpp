#include<iostream>
using namespace std;
int main(){
	int a1=1,b1=1;
	string a;
	string b;
	cin>>a;
	cin>>b;
	int len1=a.size();
	int len2=b.size();
	for(int i=1;i<=len1;i++){
		a1=a1*a[i];
	}
	for(int i=1;i<=len2;i++){
		b1=b1*b[i];
	}
	if(a1==b1){
		cout<<"GO";
	}
	else{
		cout<<"STAY";
	}
	return 0;
} 
