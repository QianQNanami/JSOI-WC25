#include<bits/stdc++.h>
using namespace std;

int a[70010][7];
int b[70010];//´æ·Å´ð°¸ 

int i=1;
bool boo=false;
int p=0;

int main()
{
    
    while(1)
	{
		
		boo=false;
    	for(int j=1;j<=6;j++)
		{
    		cin>>a[i][j];
    		if(a[i][j]!=0)
			{
    			boo=true;
			}
		}
		
		if(boo==false)
		{
			break;
		}
		
		for(int j=1;j<=6;j++)
		{
			for(int k=1;k<=a[i][j];k++)
			{
				p=p+(j*j);
				if(p>=60)
				{
					b[i]++;
					p-=60;
				}
			}
		}
		
		i++;
		
	}
	
	for(int j=1;j<=i-1;j++)
	{
		cout<<b[j]+1<<endl;
	}
    
	return 0;
}

