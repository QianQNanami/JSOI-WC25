#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[10]={1,1},ans;
signed main()
{
	ios::sync_with_stdio(false);
	while(1)
	{
		cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6];
		ans=0;
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0)break;
		ans+=a[6];//6
		ans+=a[5];//5
		a[1]-=a[5]*16;
		ans+=a[4];//4
		a[2]-=a[4]*5;
		if(a[2]<0)a[1]-=abs(a[2]*4);
		bool f;
		if(a[3]%4!=0)f=1;
		ans+=a[3]/4+f;
		a[3]%=4;
		f=0;
		if(a[3]==3)
		{
			if(a[2]>0)
				a[2]--,a[1]-=5;
			if(a[2]<=0)
				a[1]-=9;
			a[3]=0;
		}
		else if(a[3]==2)//18
		{
			if(a[2]>=3)
			{
				a[2]-=3;
				a[1]-=6;
			}
			else a[1]-=18-a[2]*4,a[2]=0;
			a[3]=0;
		}
		else if(a[3]==1)
		{
			if(a[2]>=5)
				a[2]-=5,a[1]-=7;
			else a[1]-=27-a[2]*4,a[2]=0;
			a[3]=0;
		}
		if(a[2]>0)
		{
			if(a[2]%9)f=1;
			ans+=a[2]/9+f;
			f=0;
			a[2]%=9;
			a[1]-=36-a[2]*4,a[2]=0;
		}
		if(a[1]>0)
		{
			if(a[1]%36!=0&&a[1]>0)f=1;
			ans+=a[1]/36+f;
			f=0;
		}
		cout<<ans<<endl;
	}
	return 0;
}/*
0 0 0 0 0 0
0 0 0 0 0 0
0 0 0 0 0 0
1 1 1 0 0 0
1 1 1 0 0 0
1 1 1 0 0 0


*/
