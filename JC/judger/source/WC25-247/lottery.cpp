#include<bits/stdc++.h>
using namespace std;
int M,N,sum;
bool q=1;
int main(){
    cin>>M>>N;
    for(int i=M;i<=N;i++)
    {
    	for(int j=2;j<=i-1;j++)
    	{
            if(i%j==0)
            {
            	q=0;
			}
		}
		if(q==1)
		{
			sum++;
		}
		q=1;
	}
	cout<<sum-1;
	return 0;
}
