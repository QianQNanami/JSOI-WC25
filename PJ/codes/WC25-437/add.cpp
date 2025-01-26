#include<bits/stdc++.h>
using namespace std;
long long a[100001];
long long sum[100001];
int main()
{
	long long n,m,l,r;cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cin>>m;
	for(int i=1;i<=n;i++)
		sum[i]=sum[i-1]+a[i];
	for(int i=1;i<=m;i++){
		cin>>l>>r;
		cout<<sum[r]-sum[l-1]<<endl; 
	}
	return 0;
}
