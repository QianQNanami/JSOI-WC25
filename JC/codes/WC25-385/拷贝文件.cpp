#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[1010],summ=0;
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(a[i]<a[j])swap(a[i],a[j]);
	for(int i=1;i<n;i++)
		for(int j=1;j<=i;j++)
			summ+=a[j];
	cout<<summ;
	return 0;
} 
