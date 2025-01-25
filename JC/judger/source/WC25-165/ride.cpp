#include <bits/stdc++.h>
using namespace std;

int main(){
	string x,f;
	cin>>x>>f;
	long long s=1,ans=1;
	int len1=x.size(),len2=f.size();
	for(int i=0;i<len1;i++) {
		s=s*(x[i]-'A'+1);
	}
	for(int i=0;i<len2;i++) {
		ans=ans*(f[i]-'A'+1);
	}
	s%=47;
	ans%=47;
	if(s==ans){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}
	return 0;
}
