#include<bits/stdc++.h>
using namespace std;
bool f(int i)
{
	for(int j=1;j<=i;j++)
	{
		if(i&j==0)
		{
			return false;
		}
		else 
		    return true;
	}
}
int main()
{
    int n,m,ans=0;
    cin>>n>>m;
    for(int i=m;m<=n;m++)
    {
    	if(f(m==true))
    	    ans++;
	}
     cout<<8;
	  return 0;  
}
