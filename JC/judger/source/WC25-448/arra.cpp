#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,k,s=0,a[1001]; 
	cin>>n>>k;
	for(i=1;i<=n;i++)
	{
		a[i]=(n-k)/2+2;
		if(a[i]!=0)
		{
			s++;
			a[i]=(n-k)/2;
		} 
	}
	cout<<s;
	return 0;
}
