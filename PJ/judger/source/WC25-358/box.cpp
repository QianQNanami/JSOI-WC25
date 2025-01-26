#include<bits/stdc++.h>
using namespace std;
int a[1000000],ans[1000000];
int main()
{
	freopen("box.in","r",stdin);
	freopen("box.out","w",stdout);
	a[1]=1;
	int sum=0,juan=1;
	while(!(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0))
	{for(int i=1;i<=6;i++)
	{
		cin>>a[i];
		sum+=a[i]*i*i;
	}
	ans[juan]=sum/36;
	if(sum%36!=0)
	{
		ans[juan]+=1;
	}
	sum=0;
	juan++;
    }
    for(int j=1;j<=juan-2;j++)
    {
    	cout<<ans[j]<<endl;
	}
	return 0;
}
