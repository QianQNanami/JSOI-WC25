#include<bits/stdc++.h>
using namespace std;
int main(){
	string n,m;
	int n1=1,m1=1;
	cin>>n>>m;
	for(int i=0;i<n.size();i++) n1*=n[i]-65;
	for(int i=0;i<m.size();i++) m1*=m[i]-65;
	if(n1%47==m1%47) cout<<"GO";
	else cout<<"STAY";
	return 0;
}
