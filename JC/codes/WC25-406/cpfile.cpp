#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,l,r,k,i,a,s,b;
	cin>>n>>l>>r;
	a=r-l+1;
	for(s=1;s==n-1;s++)
	{
		for(i=1;i==a;i++)
		{
			b=i*n+s;
			if(l<=b&&b<=r)
			{
				cout<<s<<endl;
				break;
			}
		}
	}
	return 0;	 
}
