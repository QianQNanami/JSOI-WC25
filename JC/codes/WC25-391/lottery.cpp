#include<bits/stdc++.h>
using namespace std;
int m,n,s;
int p(int x)
{
	int f=1;
	if(x==1||x==0) return 0;
	else 
	{
		for(int i=2;i*i<=x;i++)
		{
			if(x%i==0) 
			{
				f=0;
				break;
			}	
		}
		if(f==1) return 1;
		else if(f==0) return 0;
	}
}
int main()
{
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		if(p(i)==1) s++;
	}
	cout<<s;
	return 0;
 } 
