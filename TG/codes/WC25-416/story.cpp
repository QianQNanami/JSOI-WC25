#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int a[50005];
int main()
{
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	while(1)
	{
		int x;
		cin>>x;
		if(x==1)
		{
			int a,b;
			cin>>a>>b;
		}
		else
		{
			m--;
			cout<<"-1"<<endl;
		}
		
		if(k==0)
		{
			break;
		}
	}
	
	return 0;
}
