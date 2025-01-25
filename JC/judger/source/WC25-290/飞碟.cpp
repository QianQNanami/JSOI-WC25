#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	cin>>a>>b;
	int ac=1,bc=1;
	for(int i=0;i<a.size();i++){
		ac*=(a[i]-'A'+1);
	}
	for(int i=0;i<b.size();i++){
		bc*=(b[i]-'A'+1);
	}
	if(ac%47==bc%47)cout<<"GO";
	else cout<<"STAY";
	return 0;
}
