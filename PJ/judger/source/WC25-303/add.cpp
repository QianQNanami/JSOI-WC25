#include<bits/stdc++.h>
using namespace std;
int a[100005];
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	cin>>a[i];	
	}
    int m; 
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		int x,y;
		long long s=0;
		cin>>x>>y;
		for(int j=x;j<=y;j++)
		s+=a[j];
		cout<<s;
	}
	return 0;
}
	
