#include<bits/stdc++.h>
using namespace std;
int m;
int s(int x)
{
	int k;
	int n,b;
	for(int i=1;i<=x/2+1;i++)
	{
		for(int j=2;j<=i;j++)
		{
			if(i%j==0&&j!=1&&j!=i)
			{
				n++;
			}
			else
			{
				k++;
			}
		}
		if(k!=0)
		{
			b++;
		}
	}
	return b;
}
int main()
{
	int M,N;
	cin>>M>>N;
	m=s(M)+s(N);
	cout<<m;
	return 0;
}
