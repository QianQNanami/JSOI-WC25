#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int a[70001][1000],s,b[70002],j=1;
	for(int i=1;i<=6;i++)
	{
		if(a[i][1]&&a[i][2]&&a[i][3]&&a[i][4]&&a[i][5]&&a[i][6])
		{
			for(int k=1;k<=6;k++)
			{
				cin>>a[i][k];
				s=0;
				s+=a[i][k]*k*k;
				if(s%36==0&&s)
				{
					b[j]=s/36;
				}
				else
				{
					b[i]=s/36+1;
					j++;
				}
			}
		}
		else
		{
			break;
		}
	}
	for(int i=1;i<=sizeof(b);i++)
	{
		if(b[i]!=0)
		{
			cout<<b[i]<<endl;
		}
	}	
	return 0;
}
