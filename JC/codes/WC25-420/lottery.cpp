#include<bits/stdc++.h>
using namespace std;
int m,n,sum;
bool s(int a)
{
	for(int i=2;i<=sqrt(a);i++)
	{
		if(a%i==0)
		{
			return false;
		}
	}
	return true;
}
int main(){
	cin>>m>>n;
	if(m==1){
		m=2;
	}
	for(int i=m;i<=n;i++)
	{
		if(s(i)){
			sum++;	
		}
	}
	cout<<sum;
	return 0;
} 
