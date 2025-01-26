#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	long long a[7]={0};
	long long b[1001]={0};
	while(1)
	{
		int cnt=0;
		for(int i=1;i<=6;i++)
		{
			cin>>a[i];
			if(a[i]>0)
			{
				b[i]=1;
			}
			else
			{
				b[i]=0;
			}
		}
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0)
		{
			break;
		}
		int sum = 0;
		for(int i=1;i<=6;i++)
		{
			if(sum+b[i]*i<6)
			{
				sum++;
			}
			else if(sum+b[i]*i==6)
			{
				cnt++;
				sum=0;
			}
			else if(sum+b[i]*i>6)	
			{
				cnt++;
				sum=a[i]*i;
			}	
		}
		if(sum>0)
		{
			cnt++;
		}
		cout<<cnt<<endl;			
	}	 
	return 0;
}
