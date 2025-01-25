#include<bits/stdc++.h>
using namespace std;
int n,k,sum;
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
    if((n-k)%2==0) 
	{
		sum++;
	}         
	else
	{
		break;

	}       	
	}
	cout<<sum/2;
	return 0;
}
