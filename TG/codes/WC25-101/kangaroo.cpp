#include<bits/stdc++.h>
using namespace std;

queue<long long> q;

int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen(" kangaroo.out","w",stdout);
	
	int n=0;
	int ans=0;
	
	scanf("%d",&n);
	long long a[n];
	
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	q.push(a[0]);
	for(int i=1;i<n;i++)
	{
		q.push(a[i]);
		long long u=q.front();
		if(a[i]/2>=u)
		{
			ans++;
			q.pop();
		}
	}
	printf("%d",ans);
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
