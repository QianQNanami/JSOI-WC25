#include<bits/stdc++.h>
using namespace std;
signed main () 
{
	int sum=0,i=0,k=0,sums=0;
	int a[6]={0};
	int b[70000]= {0};
	while(100)
	{
		for(int j=1; j<=6; j++) 
		{
//			cout<<"i:"<<i<<endl;
			scanf("%d",&a[i]);
			sum+=a[i];
//			cout<<"sum:"<<sum<<endl;
			if(i==0) 
			{
				sums+=a[i];
			}
			if(i==1) 
			{
				sums+=a[i]*4;
			}
			if(i==2) 
			{
				sums+=a[i]*9;
			}
			if(i==3) 
			{
				sums+=a[i]*16;
			}
			if(i==4)
			{
				sums+=a[i]*25;
			}
			if(i==5) 
			{
				sums+=a[i]*36;
				i=0;
			}
			if(i<5)
			{
				i++;
			}
//			cout<<"sums:"<<sums<<endl;
		}
//		cout<<"sums:"<<sums<<endl;
		b[k]=sums/36;
//		cout<<"b[k]:"<<b[k]<<endl;
//		cout<<"k:"<<k<<endl;
		if(sums%36!=0)
		{
			b[k]++;
		}
		if(sum==0)
		{
			break ;
		}	
		sum=0;
		k++;
		sums=0;
		i=0;
	}
	for(i=0; i<k; i++) 
	{
		printf("%d", b[i]);
	}
	return 0;
}
