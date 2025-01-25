#include<bits/stdc++.h>
using namespace std;
int n,m,ans=0;
int main()
{
	cin>>n>>m;
	bool f=true;
	for(int i=n;i<=m;i++)
	{
		for(int i1=2;i1<i;i1++)
		{
			if(i%i1!=0)
				f=false;
		}
		if(f)
			ans++;
		cout<<ans<<endl;
		f=false;  
	}
	cout<<endl;
	cout<<ans;
	return 0; 
}

