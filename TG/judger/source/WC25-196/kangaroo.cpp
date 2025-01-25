#include<bits/stdc++.h>
using namespace std;
const int N=5e4+7;
int n;
int a[N];
bool b[N];
int ans;
int great[N];
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	
	
	
	cin>>n;
	for(int i=1;i<=n;i++)
	scanf("%d",a[i]);
	sort(a+1,a+n+1);
	
	
	
	/*for(int i=1;i<=n;i++)
	cout<<a[i]<<" ";
	cout<<endl;*/
	
	
	int only;
	for(int i=1;i<=n;i++)
	{
		if(a[n]/2<a[i]) {
			only=i;
			break;
		}
	}	
	for(int i=1;i<=n&&(!b[i]);i++)
	{
		if(b[n]==1||a[n]/2<a[i]) break;
		int l=only,r=n;
		while(l<r)
		{
			int mid=(l+r)>>1;
			if(a[mid]/2<a[i]||b[mid]==1) l=mid+1;
			else r=mid;
		}
		ans++;
		//cout<<i<<' '<<l<<endl;
		b[i]=1,b[l]=1;
	}
	cout<<ans;
	return 0;
}
/*
8
2 5 7 6 9 8 4 2
*/
