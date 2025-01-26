#include<bits/stdc++.h>
using namespace std;
int a[7];
int sum;
int main()
{
	while(1)
	{		
		sum=0;
		for(int i=1;i<=6;i++)
		{
			cin>>a[i];
			sum=sum+a[i]*i*i;
		}
		if(sum==0)
			break;	
		cout<<ceil(1.0*sum/36)<<endl;
	}	
	return 0;
} 
