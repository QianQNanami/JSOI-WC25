#include<bits/stdc++.h>
using namespace std;
bool dsb(int x)
{
	if(x==1)return false;
	if(x==2)return true;
	for(int i=2;i<=sqrt(x);i++)
	{
		if(x%i==0) return false;
	}
	return true;
 } 
int main()
{
	int m,n,summ=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		if(dsb(i))summ++;
	 } 
	cout<<summ;
	return 0;
 } 
