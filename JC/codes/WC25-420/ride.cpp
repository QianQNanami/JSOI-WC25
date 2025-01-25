#include<bits/stdc++.h>
using namespace std;
string a,b;
int aa,bb;
int main(){
	cin>>a>>b;
	for(int i=0;i<=a.size();i++)
	{
		aa*=int(a[i]-64);
	}
	for(int i=0;i<=b.size();i++)
	{
		bb*=int(b[i]-64);
	}
	if(aa==bb)
	{
		cout<<"GO";
	}
	else
	{
		cout<<"STAY";
	}
	return 0;
} 
