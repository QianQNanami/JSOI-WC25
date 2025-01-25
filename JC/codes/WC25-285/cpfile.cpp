#include<bits/stdc++.h>
using namespace std;
int a[1001],b[1001];
int main()
{
int n,i,j,s=0,k=0;
cin>>n;
for(i=1;i<=n;i++)
{
	cin>>a[i];
}
sort(a+1,a+n+1);
while(s!=n)
{
	s++;
	k=k+a[s];
	b[s+1]=k;
}
k=0;
for(i=2;i<=n;i++)
{
k=k+b[i];
}
cout<<k;
return 0;
}
