#include<bits/stdc++.h>
using namespace std;

int stop(int n,int k)
{
	if(n-k<=0)
	{
		return 1;
	}
	else if((n-k)%2==0)
	{
		int x=(n-k)/2;
		return stop(x,k)+stop(x+k,k);
	}
}

int main()
{
	int n,k;
	cin>>n>>k;
	cout<<stop(n,k);
	return 0;
}
