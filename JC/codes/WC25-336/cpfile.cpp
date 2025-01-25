#include<bits/stdc++.h>
using namespace std;
int p[1005],k[1005],ans;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>p[i];
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(p[j]<p[i])
				swap(p[i],p[j]);
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
			k[i]+=p[j];
		ans+=k[i];
	}
	cout<<ans<<endl;
	return 0;
}
