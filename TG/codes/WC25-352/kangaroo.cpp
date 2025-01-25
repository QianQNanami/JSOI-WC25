#include<bits/stdc++.h>
using namespace std;
int n,a[50005],ans;
priority_queue<int,vector<int>,greater<int> > q;
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;++i) 
	{
		scanf("%d",&a[i]);
		q.push(a[i]);
	}
	int ls=1;
	while(!q.empty())
	{
		a[ls]=q.top();
		q.pop();
		++ls;
	}
	for(int i=1,j=n/2+1;i<=n/2&&j<=n;++i,++j)
	{
		while(a[i]*2>a[j]) ++j;
		if(j<=n) ans++;
	}
	printf("%d",ans);
	return 0;
}
/*
8
2 5 7 6 9 8 4 2

9
1 2 3 4 5 6 7 8 9

3
3 2 1
*/
