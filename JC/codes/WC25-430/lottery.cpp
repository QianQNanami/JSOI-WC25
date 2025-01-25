#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m,n,a,k;
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		k=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
				k++;
		}
		if(k==2)
			a++;
	}
	cout<<a;
	return 0;
}
