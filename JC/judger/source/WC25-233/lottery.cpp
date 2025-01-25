#include<bits/stdc++.h>
using namespace std;
int m,n; 
int main()
{
	cin>>m>>n;
	int k=0;
	int s=0; 
	bool ans=false;
	for(int i=m;i<=n;i++)
	{
		if(i==1)
		{
			ans=true;
			s++;
		}
	 
	for(int j=2;j<i;j++)
	{
		if(i%j==1)
		{
			ans=true;
			s++;
		}
	} 
		if(ans==false)
		{ 
		k++;
		ans=false;
		} 
	} 
	
	cout<<s<<endl;			
	return 0;
} 
