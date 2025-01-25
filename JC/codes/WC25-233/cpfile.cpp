#include<iostream>
using namespace std;
const int maxn=100001+10;
int n,sec;
int a[maxn];
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>sec;
		a[i]=sec;
		
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;i=j<=n;j++)
		{
			if(a[j]>a[j+1]) swap(a[j],a[j+1]);
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

