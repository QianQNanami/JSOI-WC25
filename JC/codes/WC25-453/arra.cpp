#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,K,n,k,b=0;
	cin>>N>>k;
	n=N;
	k=K;
	while(n>0)
	{
		int x=0;
		n-=2;
		n/=2;
		K=n+2;
		if(n-2==0||n-2/2!=0)b++;
	}
	cout<<b+1;
	return 0;
}
