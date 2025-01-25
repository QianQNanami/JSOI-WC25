#include <bits/stdc++.h>
using namespace std;

int main(){
	string h;
	string d;
	int a=1,b=1;
	cin >>h;
	cin >>d;
	for(int i=0; i<d.size(); i++){
		a*=int(d[i])-64;
	}
	for(int i=0; i<h.size(); i++){
		b*=int(h[i])-64;
	}
	if(a%47==b%47) cout <<"GO"<<endl;
	else cout <<"STAY"<<endl;
	return 0;
}
