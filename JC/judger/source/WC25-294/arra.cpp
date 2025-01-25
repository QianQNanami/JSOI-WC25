#include<bits/stdc++.h>
using namespace std;
int ans=1;
int fl(int n,int k)
{
	if((n-k)%2==0&&(n-k)/2!=0)
	{
		fl((n-k)/2,k);
		fl((n+k)/2,k);
		ans++;
		cout<<ans<<endl;
	}
	return ans;
}
int main()
{
	int n,k;
	cin>>n>>k;
	cout<<fl(n,k);
	return 0;
}
