#include<bits/stdc++.h>
using namespace std;
int a[100000],sum[100000],sum2[1000]; 
long long n,m,l,r;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum[i]=sum[i-1]+a[i];
	}
	cin>>m;
	for(int i=m;i>=1;i--)
	{
		cin>>l>>r;
		sum2[i]=sum[r]-sum[l-1];
	}
	for(int i=m;i>=1;i--)
	{
		cout<<sum2[i]<<endl;
	}
	return 0;
} 
