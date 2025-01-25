#include<bits/stdc++.h>
using namespace std;
int aaa(int a,int s)
{
	int f=0;
	for(int i=a;i>=1;i=i-s)
	{	
		if(a>s)
		{
			f++;	
		}
	}
	return f;
}
int main()
{
	int n,k;
	cin>>n>>k; 
	cout<<aaa(n,k);
	return 0;
} 
