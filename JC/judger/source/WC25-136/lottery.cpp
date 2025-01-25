#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n;
	cin>>m>>n;
	int lenght=n-m+1;
	int ans=0;
	for(int x=2;x*x<=lenght;x++)
	{
		
		
		ans++;
	}
	cout<<ans;
	return 0;
}
