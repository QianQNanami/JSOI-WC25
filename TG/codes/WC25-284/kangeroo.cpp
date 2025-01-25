#include <bits/stdc++.h> 
using namespace std;
int n,cnt;
struct k
{
	int v;
	bool z=1;
}a[1005];
bool cmp(k a,k b)
{
	if(a.v>b.v)
	{
		return 1;
	}
	return 0;
}
int main()
{
	//freopen("kangeroo.in","r",stdin);
	//freopen("kangeroo.out","w",stdout);
	cin >> n;
	for(int i = 1;i<=n;i++)
	{
		cin >> a[i].v;
	}
	sort(a+1,a+n+1,cmp);
	for(int i = 1;i<=n;i++)
	{
		for(int j = i;j<=n;j++)
		{
			if(a[i].v>=a[j].v*2 && a[j].z && a[i].z)
			{
				cnt++;
				a[j].z = 0;
				break;
			}
		}
		cout << a[i].v<<" ";
	}
	cout << cnt;
	return 0;
}
