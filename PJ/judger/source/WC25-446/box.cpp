#include <bits/stdc++.h>
using namespace std;
int a[10],cnt[70005],step=1,jiling,x=6,ans;
bool b = 1;
int main()
{
	while(b)
	{ 
		for(int i = 1;i <= 6;i++)
		{
			cin >>a[i];
			for(int j = 1;j <= a[i];j++)
			{
				x = x-i;
				if(x<0)
				{
					ans++;
					x = 6-i;
				}
			}
			if(a[i]==0)
			{
				jiling++;
			}
			x=x-i;
		}
		if(jiling ==6)
		{	
			break;
		} 
		cnt[step]=ans;
		step++;
		ans=0;
		jiling=0;
	}
	for(int i = 1;i <= step;i++)
	{
		cout <<cnt[i]<<endl;
	}
}
