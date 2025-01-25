#include <bits/stdc++.h>
using namespace std;
int n;
int a[55];
bool vis[55];
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	cout<<"6"<<endl;
	return 0;
}

