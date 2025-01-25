#include<iostream>
using namespace std;

int main()
{
	string str;
	cin>>str;
	string s;
	cin>>s;
	int sum=1;
	int tota=1;
	for(int i=0;i<s.size();i++)
	{
		
			s[i]=int s[i]-64;
			sum=sum*s[i];
		for(int j=0;j<str.size();j++)
		{
			str[j]=int (str[j])-64;
			tota=tota*str[j];
		}
		if(sum%47==tota)
		cout<<"GO"<<endl;
		else
		cout<<"STAY"<<endl; 
}
