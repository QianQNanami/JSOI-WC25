#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a,b;
	cin>>a>>b;
	int c=1,d=1;
	for(int i=0;i<a.size();i++)
	{
		c=c*(a[i]-64);
	}
	for(int i=0;i<b.size();i++)
	{
		d=d*(b[i]-64);
	}
	if(c%47==d%47)cout<<"GO"<<endl;
	else cout<<"STAY"<<endl;
	return 0;
}
