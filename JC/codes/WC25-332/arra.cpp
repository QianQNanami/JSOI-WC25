#include<bits/stdc++.h>
using namespace std;
int count(int n,int k)
{
	if(n<k+2||(n-k)%2)
		return 1;
	else
		return count((n-k)/2,k)+count((n+k)/2,k);
}
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<count(n,k);
	return 0;
}
