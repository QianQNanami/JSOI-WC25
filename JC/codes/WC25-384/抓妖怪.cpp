#include<bits/stdc++.h>
using namespace std;
bool aaa(int a)
{
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			
			return false;
		}
	}
	return true;
}
int main()
{
	int n,m,summ=0;
	cin>>m>>n;
	for(int i=2;i<=m;i++)
	{
		if(aaa(i)==true)
		{
			summ++; 
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(aaa(i)==true)
		{
			summ++;
		}
	}
	cout<<summ;
	return 0;
} 
