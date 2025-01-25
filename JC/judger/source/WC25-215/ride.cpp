#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin>>a>>b;
	int n=1,k=1;
	for(int i=0;i<a.size();i++)
	{
		n*=a[i]-'A'+1;
	}
	for(int i=0;i<b.size();i++)
	{
		k*=b[i]-'A'+1;
	}
	if(k%47==n%47)cout<<"GO";
	else cout<<"STAY";
	return 0;
}
