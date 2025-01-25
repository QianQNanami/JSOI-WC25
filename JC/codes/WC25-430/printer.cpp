#include<bits/stdc++.h>
using namespace std;
int b[10000];
int main()
{
	int n,m,x,y=0,k;
	bool z=true;
	cin>>n>>m;
	queue<int>a;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a.push(x);
		b[i]=x;
	}
	b[m]=-1;
	while(z)
	{
		x=0;
		k=0;
		for(int i=1;i<=n;i++)
		{
			if(a.front()>x)
				x=a.front();
			a.push(a.front());
			a.pop();
		}
		while(a.front()!=x)
		{
			a.push(a.front());
			a.pop();
		}
		for(int i=0;i<n;i++)
		{
			if(b[i]==a.front())
				b[i]=0;
		}
		a.pop();
		n--;
		y++;
		for(int i=0;i<n;i++)
		{
			if(b[i]==-1)
			{
				z=1;
				break;
			}
			k++;
		}
		if(k==n-1)
			z=0;
	}
	cout<<y;
	return 0;
}
