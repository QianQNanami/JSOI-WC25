#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[10010],l,r;
unsigned long long s[10010];
int main()
{
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
	cin>>m;
	for(int i=1; i<=m; i++)
	{
		cin>>l>>r;
		for(int j=l; j<=r; j++) s[i]+=a[j];
	}
	for(int i=1; i<=m; i++) cout<<s[i]<<endl;
	return 0;
}

