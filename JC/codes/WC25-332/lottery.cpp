#include<bits/stdc++.h>
using namespace std;
bool isprime(int a)
{
	if(a==1)return 0;
	for(int i=2;i*i<=a;i++)
	{
		if(a%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int a,b;
	cin>>a>>b;
	int cnt=0;
	for(int i=a;i<=b;i++)
	{
		if(isprime(i))
			cnt++;
	}
	cout<<cnt;
	return 0;
}
