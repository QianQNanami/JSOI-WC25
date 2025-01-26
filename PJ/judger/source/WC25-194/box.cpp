#include<bits/stdc++.h>
using namespace std;
int a[7],ans,n;
int main()
{
	while(1)
	{
		for(int i=1; i<=6; i++)
		{
			cin>>a[i];
			n=max(a[i],n);
		}
		if(n==0) return 0;
		ans=a[1]+a[2]*4+a[3]*9+a[4]*16+a[5]*25+a[6]*36;
		if(ans%36==0) cout<<ans/36<<endl;
		else cout<<ans/36+1<<endl;
		n=0;
	}
	return 0;
}
