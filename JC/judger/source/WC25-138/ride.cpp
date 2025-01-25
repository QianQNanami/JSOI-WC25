#include<bits/stdc++.h>
using namespace std;
char a[70],b[70];
int ans=1,bns=1;
int main(){
	cin>>a[70];
	cin>>b[70];
	for(int i=1;i<=70;i++){
		if(a[i+1]!='\0'){
				ans=ans*a[i];
			}
		if(b[i+1]!='\0'){
			bns=bns*b[i];
	}
	}
	if(ans==bns){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}
	return 0;
}
