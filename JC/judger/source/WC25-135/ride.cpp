#include<bits/stdc++.h>
using namespace std;
int main(){
	 char a,b;
	 cin>>a>>b;
	 for(int i=1;i<=a;i++){
	 	a+=a-'A'+1;
	 	b+=b-'A'+1;
	 }
	 if(a/47!=b/47){
	 	cout<<"GO";
	}
	 else{
	 	cout<<"STAY";
	 }
	return 0;
}
