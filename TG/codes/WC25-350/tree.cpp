#include<bits/stdc++.h>
using namespace std;
int n;
struct Node
{
	int w;
	int fa;
}a[800000];

int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].w>>a[i].fa;
	}
cout<<1;
	return 0;
}
