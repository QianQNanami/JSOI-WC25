#include<bits/stdc++.h>
using namespace std;
int n,t,q[1100],s;

void p(int x) 
{
	for(int i=2;i<=n;i++)
	{
		if(q[i]>x) 
		{
			for(int i=2;i<=n;i++)
			{
				q[i-1]=q[i];
			}
			q[n]=x;
		}
		else 
		{
			t--;
		}
		s++;
	}
}

int main()
{
	cin>>n>>t;
	for(int i=1;i<n;i++)
	{
		cin>>q[i];
	}
	t++;
	int x=q[t];
	while(t>0)
	{
		p(q[t]);
	}
	cout<<s;
	return 0;
 } 
