#include<bits/stdc++.h>
using namespace std;
string d;
string h;
int f=1,s=1;
int main(){
	cin>>d;
	cin>>h;
	for(int i=1;i<=d.size()+1;i++){
		f*=d[i]-96;
	}
	for(int i=1;i<=h.size()+1;i++){
		s*=h[i]-96;
	}
 	if(s%47==f%47){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}
	return 0;
}
