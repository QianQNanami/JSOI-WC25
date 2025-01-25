#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long m,n,s=0,q=0;
	cin>>m>>n;
	for(long long i=m;i<=n;i++)
	{
		for(long long y=2;y<=i-1;y++){
			if(i%y==0)break;
			if(y=i-1)q++;
		}
	}
	cout<<q-1;
}
