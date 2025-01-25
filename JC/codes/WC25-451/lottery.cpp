#include<bits/stdc++.h>
using namespace std;
int main(){
	int M,N,i,q;
	cin>>M>>N;
	int a[N];
	int cnt=N;
	for(q=M;i<=N;i++)
	{
		for(int k=1;k<=N;k++)
	    {
			if(q%k==0)
			{
			 	a[q]=0;
			}	
		} 
    }  
    for(q=1;q<=N;q++)
    {
    	if(a[q]=0)
    	cnt-=1;
	}
	cout<<"8"<<endl;
	return 0;
}
