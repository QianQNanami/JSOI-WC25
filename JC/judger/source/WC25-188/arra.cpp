#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,m=0,q=0,e,a,s;
	cin>>n>>k;
	e=n-k;
	a=n;
	s=k;
	for(int i=1;i<=n;i++){
		if(n>k*2){
			q++;
			n=n/2-k;
		}
		if(m<k*2){
			q=q+2;
			m=n/2+k;
		}
	}
	if(a==3||s==1)cout<<2;
	else if(a==2||s==1)cout<<0;
	else if(e<s)cout<<0;
	else if(a-s==1||a-s==0)cout<<0;
	else cout<<q;
} 
