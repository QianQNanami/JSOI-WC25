#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[7][70005];
	cin>>a[1][1]>>a[2][1]>>a[3][1]>>a[4][1]>>a[5][1]>>a[6][1];
	int h=1;
	while(a[1][h]!=0||a[2][h]!=0||a[3][h]!=0||a[4][h]!=0||a[5][h]!=0||a[6][h]!=0)
	{
		int sum=0;
		for(int i=1;i<=6;i++)
		{
			sum+=a[i][h]*i*i;
		}
		if(sum%36==0) sum/=36;
		else sum=sum/36+1;
		cout<<sum<<endl;
		h++;
		for(int i=1;i<=6;i++)
		{
			cin>>a[i][h];
		}
	}
	return 0;
}
