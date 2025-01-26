#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[7];
	int b;
	int c;
	int d[70001]={0};
	int e;
	e=0;
	int f;
	int g;
	while(1)
	{
		cin>>a[1];
		cin>>a[2];
		cin>>a[3];
		cin>>a[4];
		cin>>a[5];
		cin>>a[6];
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0)
		{
			break;
		}
		b=1;
		c=6;
		e=e+1;
		d[e]=a[4]+a[5]+a[6];
		a[1]=a[1]-a[5]*11;
		if(a[1]<0)
		{
			a[1]=0;
		}
		a[2]=a[2]-a[4]*5;
		if(a[2]<0)
		{
			f=0-a[2];
			a[2]=0;
			a[1]=a[1]-4*f;
			if(a[1]<0)
			{
				a[1]=0;
			}
		}
		d[e]=d[e]+a[3]/4;
		a[3]=a[3]%4;
		if(a[3]==1)
		{
			d[e]=d[e]+1;
			a[1]=a[1]-7;
			if(a[1]<0)
			{
				a[1]=0;
			}
			a[2]=a[2]-5;
			if(a[2]<0)
			{
				f=0-a[2];
				a[2]=0;
				a[1]=a[1]-f*4;
				if(a[1]<0)
				{
					a[1]=0;
				}
			}
		}
		else
		{
			if(a[3]!=0)
			{
				d[e]=d[e]+1;
				a[1]=a[1]-24+5*a[3];
				if(a[1]<0)
				{
					a[1]=0;
				}
				a[2]=a[2]-3+a[3];
			}
		}
		if(a[1]==0&&a[2]==0)
		{
			continue;
		}
		d[e]=d[e]+a[2]/9;
		a[2]=a[2]%9;
		if(a[2]!=0)
		{
			d[e]=d[e]+1;
			a[1]=a[1]-36+4*a[2];
			if(a[1]<0)
			{
				a[1]=0;
			}
		}
		d[e]=d[e]+a[1]/36;
		a[1]=a[1]%36;
		if(a[1]!=0)
		{
			d[e]=d[e]+1;
		}
	}
	for(int i=1;i<=e;i++)
	{
		cout<<d[i];
		if(i!=e)
		{
			cout<<"\n";
		}
	}
	return 0;
}
