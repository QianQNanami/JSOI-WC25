#include<bits/stdc++.h>
using namespace std;
string a,b;
int la,lb,sa=1,sb=1;
int main()
{
	cin>>a>>b;
	la=a.size();
	lb=b.size();
	for(int i=0;i<la;i++)
	{
		int x=a[i]-'A'+1;
		sa*=x;
	}
	for(int i=0;i<lb;i++)
	{
		int y=b[i]-'A'+1;
		sb*=y;
	}
	if(sa%47==sb%47) cout<<"GO";
	else cout<<"STAY";
	return 0;
 } 
