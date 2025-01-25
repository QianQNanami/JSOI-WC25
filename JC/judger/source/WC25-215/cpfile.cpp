#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ans=0,b=0;
	string s;
	int n;
	cin>>n;
	char cnt[n];
	for(int i=0;i<n;i++)
	{
		cin>>cnt[i];
	}
	s=cnt;
	sort(s.begin(),s.end());
	for(int i=0;i<n;i++)
	{
		b=0;
		for(int j=0;j<i;j++)
		{
			b+=s[j]-'0';
		}
		ans+=b;
	}
	cout<<ans;
	return 0;
}
