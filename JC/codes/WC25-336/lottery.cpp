#include<bits/stdc++.h>
using namespace std;
bool su(int n)
{
	if(n==1||n==0)
		return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int M,N,ans=0;
int main()
{
	cin>>M>>N;
	for(int i=M;i<=N;i++)
	{
		if(su(i))
			ans++;
	}
	cout<<ans<<endl;
	return 0;
}
