#include<bits/stdc++.h>
using namespace std;
const int N=50005;
int n;
int a[N];

bool check(int ans)
{
	for(int i=1;i<=ans;i++)
		if(a[i]*2>a[n-ans+i])return 0;
	return 1;
}

int work(int l,int r)
{
	if(l==r)return l;
	int mid=(l+r+1)/2;
	if(check(mid))return work(mid,r);
	else return work(l,mid-1);
}

int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+1+n);
	cout<<work(1,n/2)<<endl;
	return 0;
}
