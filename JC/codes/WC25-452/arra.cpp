#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N,K,n,k,js=0;
	cin>>N>>K;
	n=N;
	k=K;
	while(n>0)
	{
		int x=0;
		n-=2;
		n/=2;
		x=n+2;
		if(n-2==0||n-2/2!=0) js++;
	}
	cout<<js+1;
	return 0;
}
