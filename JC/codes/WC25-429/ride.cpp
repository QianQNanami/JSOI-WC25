#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	int c=1,d=1;
	cin>>a>>b;
	for(int i=1;i<=a.size();i++)
	{
		c*=int(a[i])-39;
	}
	for(int i=0;i<=b.size();i++)
	{
		d*=int(b[i])-39;
	}
	if(c%47==d%47)
	   cout<<"STAY";
	 else
	   cout<<"GO";
	  return 0;  
}
