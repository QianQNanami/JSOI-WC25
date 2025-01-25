#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,cnt=0;
	cin>>a>>b;
	for(int i=a+1;i<=b-1;i++){
		if(i==2||i==3||i==5||i%2!=0&&i%3!=0&&i%5!=0&&i/i==1&&i/1==i)
		{
			cnt++;
		}
		if(i==0)
		{
			cnt--;
		}
	}
   cout<<cnt;
	return 0;
} 
