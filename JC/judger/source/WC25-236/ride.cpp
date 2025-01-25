#include<bits/stdc++.h>
using namespace std;

int main(){
	string a;
	string b;
	int n=1,m=1; 
	cin >> a >> b;
	for(int i=0;i<a.size();i++){
		n*=int(a[i])-64;
	}
	for(int i=0;i<b.size();i++){
		m*=int(b[i])-64;
	}
	if(n%47==m%47){
		cout << "GO";
	}else{
		cout << "STAY";
	}
	
	return 0;
}
