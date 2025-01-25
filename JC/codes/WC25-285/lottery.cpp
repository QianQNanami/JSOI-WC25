#include<bits/stdc++.h>
using namespace std;
int ss(int n)
{int s=0;
if(n==1) return 0;
	for(int i=2;i*i<=n;i++)
	{
	if(n%i==0) s++;
	}
	if(s==0) return 1;
	else return 0;
}
int main()
{
int m,n,s=0;
cin>>m>>n;
for(int i=m;i<=n;i++)
{
if(ss(i)==1) s++;	
}
cout<<s;
return 0;
}

