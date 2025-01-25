#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=1,m=1;
	char a[26];
	a[0]='A';
	string b[];
	string c[];
	for(int i=1;i<b.size();i++){
		cin>>b[i]
		for (int j=1;i<=26;j++){
			if(b[i]==a[j]){
				b[i]==j;
				n*=j;
			}
		}
	}
	for(int i=1;i<c.size();i++){
		cin>>c[i]
		for (int j=1;i<=26;j++){
			if(c[i]==a[j]){
				c[i]==j;
				m*=j;
			}
		}
	}
	if(n==m) {
		cout<<"GO";
	}
	else{
		cout<<"STAY";
	}
	
	return 0;
}
