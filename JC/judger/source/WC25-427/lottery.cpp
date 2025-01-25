#include<bits/stdc++.h>
using namespace std;
int flag=0,ans=0;
int su(int m)
{
	bool flag1=1;
	while(1)
	{
		flag1=1;
		for(int i=2;i*i<=m;i++)
		{
			if(m%i==0)
			{
				flag1=0; 
				break;
			}
		}
		if(flag1==0)
		{
			m++;
		}
		else
		{
			return m;
			break;
		}
	}
}
void qiu(int m,int n)
{
	int a=su(m);
	if(a>n)
	{
		ans=0;
		flag=1;
	}
	else
	{
		ans+=1;
		qiu(a,n);
	}
}
int main()
{
	int m,n;
	cin>>m>>n;
	if(m==1||m==0)
	{
		m=4;
		ans+=2;
	}
	if(m==3||m==2)
	{
		m==4;
		ans++;
	}
	qiu(m,n);
	while(1)
	{
		if(flag==1)
		{
			cout<<ans;
			return 0;
		}		
	}
}
