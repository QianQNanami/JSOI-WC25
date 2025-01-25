#include<bits/stdc++.h>
using namespace std;
int ans=0;
void take(int x,int y)
{
	if(x<=y||(x+y)%2!=0)
	{
		return;
	}
	else
	{
		ans++;
		take((x+y)/2,y);
		take((x-y)/2,y);
	}
}
int main()
{
	int x,y;
	cin>>x>>y;
	take(x,y);
	cout<<ans;
	return 0;
}
