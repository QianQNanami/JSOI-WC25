#include<bits/stdc++.h>
using namespace std;
int N,K,M;
int n=1,m;
int main()
{
	cin>>N>>K;
	while(n>1)
	{
		n=N-K;
		M=M-K;
		if(n/2!=0)
		{
			m++;
		}
		else
		{
			N=n/2+K;
		}
		if(M/2!=0)
		{
			m++;
		}
		else
		{
			M=n/2;
		}
	}
	cout<<m;
	return 0;
}
