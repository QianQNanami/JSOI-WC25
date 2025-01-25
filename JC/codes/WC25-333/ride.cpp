#include<bits/stdc++.h>
using namespace std;
string a,b;
int ansa=1,ansb=1;
int main()
{
	cin>>a>>b;
	for(int i=0;i<=a.size()-1;i++)
	{
		char ai=a[i];
		ansa*=(ai-'A'+1);
	}
	for(int i=0;i<=b.size()-1;i++)
	{
		char bi=b[i];
		ansb*=(bi-'A'+1);
	}
	if(ansa%47==ansb%47) cout<<"GO"<<endl;
	else cout<<"STAY"<<endl;
	return 0;
}
