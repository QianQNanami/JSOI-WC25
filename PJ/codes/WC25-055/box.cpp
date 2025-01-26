#include <bits/stdc++.h>
using namespace std;
struct box()
{
	int x1,y1;
	int x2,y2;
};
Box box[10005];
int main()
{
	int a[7];
	int b[10005];
	int area[7]={1,4,9,16,25,36};
	while(a[1]==a[2]==a[3]==a[4]==a[5]==a[6]==0)
	{

	    int cnt=0;
		for(int i=1;i<=6;i++)
		{
			cin>>a[i];
			if(a[i]!=0)  flag=0;
		}
		if(flag) break;
		        for(int j=0;j<=a[i];j++)
		        {
			        if(cnt+area[i]<36)
			        {
			 	        cnt=cnt+a[i];
			        }
			        else
			        {
					    sum++;
					    cnt=0;
			        }
		        }
	        }
	    }	
	    cout<<sum<<"\n";
	}
	return 0;
}
