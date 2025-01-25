#include <bits/stdc++.h>
using namespace std;
int sum(string s){
	int pro=1;
	for(int i=0;i<s.size();i++){
		//cout<<pro*int(s[i]-64)<<"="<<pro<<"*"<<int(s[i]-64)<<endl;
		pro*=int(s[i]-64);
		pro%=47;
	}
	//cout<<pro<<"%47="<<pro%47<<endl;
	return pro;
}
int main(){
	string grp,str;
	cin>>str>>grp;
	if(sum(str)==sum(grp)){
		cout<<"GO\n";
	}
	else{
		cout<<"STAY\n";
	}
	return 0;
}
