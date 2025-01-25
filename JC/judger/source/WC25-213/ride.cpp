#include<bits/stdc++.h>
using namespace std;
int main()
{
	string hx,dw;
	int n1[100];
	int n2[100];
	cin>>dw>>hx;
	int ans1,ans2;
	for(int i=0;i<hx.size();i++)
	{
	if(hx[i]<='I')
	{
	
	n1[i]=hx[i]-16-'0';
	ans1*=n1[i];
    }
    else 
    {
    	n1[i]=hx[i]-'A'+1;
    	ans1*=n1[i];
	}
	}
	for(int i=0;i<dw.size();i++)
	{
	if(hx[i]<='I')
	{
	
	n2[i]=dw[i]-16-'0';
	ans2*=n2[i];
    }
    else 
    {
    	n2[i]=dw[i]-'A'+1;
    	ans2*=n2[i];
	}
}
	if(ans2%47==ans1) cout<<"GO";
	else cout<<"STAY";
} 
