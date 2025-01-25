#include<bits/stdc++.h>
using namespace std;
int n,b,sum;
int a[100005];
int main(){
	cin>>n;
	b=a[1];
    for(int i=1;i<=n;i++)
    {
    	cin>>a[i];
    	if(a[i]>=b)
    	{
    		b=a[i];
		}
	}
	for(int i=1;i<=n;i++)
	{
		sum+=a[i];
	}
	cout<<sum+b;
	return 0;
} 
