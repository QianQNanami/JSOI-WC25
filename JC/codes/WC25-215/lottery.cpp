#include<bits/stdc++.h>
using namespace std;
int main()
{
	int M,N,ans=0;
	cin>>M>>N;
	for(int i=M;i<=N;i++)
	{
		if(i==2){
			ans++;
		} 
		if(i==3) {
			ans++;
		}
		for(int j=2;j<=i/2;j++){
		if(i%j==0)
    	break;
		if(j==i/2)ans++;
		}
	}
	cout<<ans;
	return 0;
}
