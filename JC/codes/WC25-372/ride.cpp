#include<bits/stdc++.h>
using namespace std;
string str1,str2;
int str1_sum=1,str2_sum=1;
int main()
{
	cin>>str1>>str2;
	for(int i=0;i<str1.size();i++){
		str1_sum*=int(str1[i]-'A'+1);
	}
	for(int i=0;i<str2.size();i++){
		str2_sum*=int(str2[i]-'A'+1);
	}
	if(str1_sum%47==str2_sum%47)
	{
		cout<<"GO";
	}
	else
	{
		cout<<"STAY";
	}
	return 0;
}
