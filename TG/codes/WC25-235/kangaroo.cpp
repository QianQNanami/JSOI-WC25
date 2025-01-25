#include<bits/stdc++.h>
using namespace std;
long long n,a[50010],fil = 1,choose = 1,ans;
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i = 1;i <= n;i++)
	{
		cin>>a[i];
	}
	sort(a + 1,a + 1 + n);
	for(int i = 1;i <= n;i++)
	{
		if(a[choose] >= a[fil] * 2)
		{
			ans++;
			choose++;
			fil++;
		}
		else
		{
			choose++;
		}
	}
	cout<<ans;
	return 0;
}

