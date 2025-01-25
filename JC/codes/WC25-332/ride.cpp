#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	string b;
	cin>>a>>b;
	long long c=1,d=1;
	for(int i=0;i<a.size();i++)
		c*=int(a[i])-64;
	for(int i=0;i<b.size();i++)
		d*=int(b[i])-64;
	if(c%47==d%47)
		cout<<"GO";
	else
		cout<<"STAY";
	return 0;
}
