#include<iostream>
using namespace std;
int main() {
	string s;
	string a;
	int sum=1,sum1=1;
	cin >> a;
	cin >> s;
	for(int i=0;i<a.size();i++){
		sum=sum*(int(char(a[i])-'A')+1);
	}
	for(int i=0;i<s.size();i++){
		sum1=sum1*(int(char(s[i])-'A')+1);
	}
	if(sum%47==sum1%47){
		cout<<"GO";
	}else{
		cout<<"STAY";
	}
	return 0;
}
