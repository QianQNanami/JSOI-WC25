#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	int x=1,y=1;
	for(int i=0;i<str1.length();i++)
	{
		x=x*(str1[i]-'A'+1);
		y=y*(str2[i]-'A'+1);
	}
	if(y%47==x%47)
	{
		cout<<"GO";
	}
	else
	{
		cout<<"STAY";
	}
	return 0;
}

