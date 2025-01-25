#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,k,sum=1,sum1=1;
int main(){
	string s,s1;
	char a;
	cin>>s;
	cin>>s1;
	for(int i=0;i<=s.size()-1;i++){
		sum=sum*(int(s[i])-64);
	}
	for(int i=0;i<=s1.size()-1;i++){
		sum1=sum1*(int(s1[i])-64);
	}
	if(sum%47==sum1%47) cout<<"GO"<<endl;
	else cout<<"STAY"<<endl;
	return 0;
} 
