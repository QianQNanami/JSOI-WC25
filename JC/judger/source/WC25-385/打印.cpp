#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
	int n,t,a[10010],b[10010],top=0;
	queue<int>q;
	cin>>n>>t;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) b[i]=a[i];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(b[i]<b[j])swap(b[i],b[j]);
	for(int i=1;i<=n;i++) q.push(a[i]);
	for(int i=1;i<=n;i++)
	{
		if()
	}
	
	return 0;
} 
