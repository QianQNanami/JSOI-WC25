#include<bits/stdc++.h>
using namespace std;
int sum;
int m,n;
int main()
{
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		for(int m=1;m<=n;m++)
		{
			if(m%i==0)
				sum++;
		}
	}
	cout<<sum;
	return 0;
}
