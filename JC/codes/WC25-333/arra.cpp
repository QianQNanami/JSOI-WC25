#include<bits/stdc++.h>
using namespace std;
int n,k,ans;
void f(int x)
{
	int a=x-k;
	if(x<=k||a%2==1)
	{
		ans++;
		return;
	}
	int b=a/2;
	f(b);
	f(b+k);
}
int main()
{
	cin>>n>>k;
	f(n);
	cout<<ans;
	return 0;
}
