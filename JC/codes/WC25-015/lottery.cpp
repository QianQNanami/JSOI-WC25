#include<iostream>
using namespace std;
int main(){
	int ans=0,a=0;
	long long m,n;
	cin>>m>>n;
	for(int i=m;i<=n;i++)
	{
		a=0;
		if(i==1)
		ans--;
		for(int j=2;j<=i/2;j++)
			if(i%j==0)
			{
				a++;
				break;
			}
		if(a==0)
			ans++;
	}
	cout<<ans;
	return 0;
}
