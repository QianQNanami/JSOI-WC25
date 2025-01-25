#include<bits/stdc++.h>
using namespace std;
char x[70],h[70];
int main(){
	int i=1,x,h1=1,h2=1;
	while(x!=" "){
		cin>>x;
		a[x]=x;
	}
	while(x!=" "){
		cin>>x;
		b[x]=x;
	}
	while(a[i!=0]){
		h1=h1*(a[i]-'A'+1);
		i++;
	}
	i=1;
	while(b[i!=0]){
		h2=h2*(a[i]-'A'+1);
		i++;
	}
	if(h1%h2==0){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}
	
	return 0;
}
