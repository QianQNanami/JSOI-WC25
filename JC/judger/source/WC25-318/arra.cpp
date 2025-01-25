#include<bits/stdc++.h>
using namespace std;
int n,k;
int a1,a2;
int sum;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		if(n-k!=0)
		{
			n=n-k;
			k=a2;
			sum++;
		}
	}
	cout<<sum;	
	return 0;
}
