#include<bits/stdc++.h>
using namespace std;
string s[2];
int main()
{
	cin>>s[0];
	cin>>s[1];
	long long ans0=1,ans1=1;
	for(int i=0;i<s[0].size();i++)
	{
		ans0*=int(s[0][i]-64);
	}
	for(int i=0;i<s[1].size();i++)
	{
		ans1*=int(s[1][i]-64);
	}
	if(ans1%47==ans0)
		cout<<"GO"<<endl;
	else
		cout<<"STAY"<<endl;
	return 0;
}
