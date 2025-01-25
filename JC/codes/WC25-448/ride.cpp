#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	int i,t1=a.size(),t2=b.size(),s1=1,s2=1;
	for(i=0;i<t1;i++)
	{
		s1*=a[i];
	}
	for(i=0;i<t2;i++)
	{
		s2*=a[i];
	}
	s1%=47;
	s2%=47;
	if(s1==s2)
		cout<<"GO";
	else
	 	cout<<"STAY";
	return 0;
}
