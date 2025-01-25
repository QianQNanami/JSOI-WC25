#include<bits/stdc++.h>
using namespace std;
int main()
{
	int M,N,s=0;
	cin>>M>>N;
	for(int i=M;i<=N;i++)
	{
		for(int j=1;j<N;j++)
		{	
			 if(i!=j&&i%j!=0)
			{
				s++;
			}
			else
			{
				s+=0;
			}
		}
	}
	cout<<s;
}
