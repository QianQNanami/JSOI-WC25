#include<bits/stdc++.h>
using namespace std;
int a[70005][6];
int i=1;
int main()
{
	while(1)
{
	cin>>a[i][1]>>a[i][2]>>a[i][3]>>a[i][4]>>a[i][5]>>a[i][6];
	if(a[i][1]==a[i][2]&&a[i][2]==a[i][3]&&a[i][3]==a[i][4]==0&&a[i][4]==a[i][5]&&a[i][5]==a[i][6]&&a[i][6]==0){
	break;
}
	int d=0;
	if(a[i][6]>=0){
	d+=a[i][6];
	}
	cout<<d<<endl;
	if(a[i][4]>0){
		d+=a[i][4];
			if(a[i][0]-11*a[i][5]>=0)
			{
				a[i][0]=a[i][0]-11*a[i][5];
			}
		else{
			a[i][1]=0;
		}
	}
	cout<<a[i][1]<<endl;
	cout<<d<<endl;
	if(a[i][4]>0)
	{
	d+=a[i][4];
	
	if(a[i][2]*4-20*a[i][4]>=0)
	{
	 a[i][2]==a[i][2]-5*a[i][5];
	}
	else{
	int bt=a[i][2]*4-20*a[i][5];
	cout<<bt<<endl;
	  a[i][2]=0;
	  if(a[i][1]-bt>=0)
	  {
	      a[i][1]-=bt;
	  }
	  else{
	  a[i][1]=0;
	  }
	}
}
	cout<<a[i][1]<<endl;
	cout<<d<<endl;
	if(a[i][3]>0)
	{
			if(a[i][3]%4==0)
			{
			d=d+a[i][3]/4;
		}
		if(a[i][3]%4==4)
			{
			
			d=d+(a[i][3]+1)/4;
		}
			if(a[i][2]-1);
			

	}
	if(a[i][2]>0)
	{
		if(a[i][2]%9==0)
		{
			
		
	      }
		else{
		d=d+a[i][2]/9+1;
		int bt=36-a[i][2]%9*4;
		if(a[i][1]-bt>=0)
		{
			a[i][1]-=bt;
		}
		else{
			a[i][1];
		}
	}	
}
	cout<<d<<endl;
	if(a[i][1]>0){
		if(a[i][1]%36==0)
		{
		
			d=d+a[i][1]/36+1;
		}
		else{
		d=d+a[i][1]/36+1;
		}
	}
	cout<<d<<endl;
	i++;
	break;
      }
return 0;
}

