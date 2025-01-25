#include<bits/stdc++.h>
using namespace std;
string a,b;
int x=1,y=1;
int main() {
	cin>>a>>b;
	for(int i=0; i<a.size(); i++) {
		x=x*(a[i]-64);
	}
	for(int i=0; i<b.size(); i++) {
		y=y*(b[i]-64);
	}
	if(y%47==x%47)cout<<"GO"<<endl;
	else cout<<"STAY"<<endl;
	return 0;
}
