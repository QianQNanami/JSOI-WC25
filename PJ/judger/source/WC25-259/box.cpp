#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a[7];
	while(1)
	{
		int check=0;
		for(int i=1;i<=6;i++)
		{
			cin>>a[i];
			if(a[i]==0)
			{
				check++;
			}
		}
		if(check==6)
		{
			return 0;
		}
		long long  total=0;
		for(long long i=0;i<=6;i++)
		{
			total+=a[i]*i*i;
		}
		long long ans=0;
		if(total%36>0)
		{
			ans=total/36+1;
		}else
		{
			ans=total/36;
		}
		cout<<ans<<endl;
		
	}
	
	
	
	
	return 0;
} 
