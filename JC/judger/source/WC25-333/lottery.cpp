#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
bool f(int a)
{
	if(a==1) return false;
	for(int i=2;i<=a/2;i++)
		if(a%i==0) return false;
	return true;
}
int main()
{
	cin>>n>>m;
	for(int i=n;i<=m;i++)
		if(f(i)==true) ans++;
	cout<<ans;
	return 0;
}
