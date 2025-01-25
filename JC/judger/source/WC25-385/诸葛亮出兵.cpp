#include<bits/stdc++.h>
using namespace std;
int dsb(int x,int y)
{
	int ans=0;
	for(int i=x;i>=1;i-=y)
		if(x>y)ans++;
	return ans;
}
int main()
{
	int a,b,ans;
	cin>>a>>b;
	cout<<dsb(a,b); 
	return 0;
 } 
