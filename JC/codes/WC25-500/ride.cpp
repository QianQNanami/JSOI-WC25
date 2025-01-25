#include<bits/stdc++.h>
using namespace std;
int main(){
	string a,b;
	long long s1=1,s2=1;
	cin>>a>>b;
	for(int i=0;i<a.size();i++){
		s1=s1*(a[i]-'A'+1);
	}
	for(int i=0;i<b.size();i++){
		s2=s2*(b[i]-'A'+1);
	}
	if(s1%47==s2%47) cout<<"GO"<<endl;
	else             cout<<"STAY"<<endl;
	
	return 0;
}
