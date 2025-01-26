#include<bits/stdc++.h>
using namespace std;
int a[7]={0,1,4,9,16,25,36};
int b[10];
int s[10];
int main()
{
	
	while(1)
	{
		int cnt1=0,sum=0,cnt=0;
		
		for(int i=1; i<=6; i++)
		{
			cin>>b[i];
			if(a[i]==36) cnt+=b[i];
			if(b[i]==0) cnt1++;
		}
		if(cnt1==6) break;
		for(int i=1; i<=5; i++)
		{
			sum+=a[i]*b[i];
		}
		cnt+=sum/36;
		cout<<cnt<<endl;
		
	}
	
	return 0;
}
