#include<bits/stdc++.h>
using namespace std;
int main(){
string n,k;
int s=0,z=0;
cin>>n>>k;
for(int i=0;i<n;i++) {
	s=n[i]*n[i-1];
}
for(int i=0;i<n;i++) {
	z=n[i]*n[i-1];
}
if(s==z) cout<<"GO";
else cout<<"STAY";
}
