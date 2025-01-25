#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[27];
	string hx,zm;
	int h=1,z=1;
	cin>>hx>>zm;
	for(int i=0;i<hx.size();i++)
	{
		h*=hx[i]-'A'+1;
	}
	for(int i=0;i<zm.size();i++)
	{
		z*=zm[i]-'A'+1;
	}
	if(z%47==h)
	{
		cout<<"GO";
	}
	else
	{
		cout<<"STAY";
	}
	return 0;
}

