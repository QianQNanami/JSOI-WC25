#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	int c=1,d=1;
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
	{
		c=c*int(a[i]-64);
	}
	for(int i=0;i<b.size();i++)
	{
		d=d*int(b[i]-64);
	}
	if(c%47==d%47)
		cout<<"GO";
	else
		cout<<"STAY";
	return 0;
}
