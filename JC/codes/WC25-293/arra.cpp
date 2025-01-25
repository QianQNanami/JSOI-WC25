#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	string s;
	cin>>s;
	int n;
	cin>>n;
	while(n--){
		int m;
		cin>>m;
		if(m=1){
			char x,y;
			cin>>x>>y;
			s.substr(s.find(x),y);
		}
		if(m=2){
			char x;
			cin>>x;
			s.erase(s.find(x),1);
		}
	}
	cout<<s;
	return 0;
}
