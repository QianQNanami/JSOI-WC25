#include<bits/stdc++.h>
using namespace std;
const int N=105;
int n,a[N][N],maxn=INT_MIN;
int node(int x,int y,int l)
{
	int ans=0,i=x,j=y;
	for(;i<=x+l-1;i++)
	{
		ans+=a[i][j];
		j++;
	}
	i=x;j=y+l-1;
	for(;i<=x+l-1;i++)
	{
		ans-=a[i][j];
		j--;
	}
	return ans;
}
int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)cin>>a[i][j];
	for(int k=2;k<=n;k++)
	{
		for(int i=1;i<=n-k+1;i++)
			for(int j=1;j<=n-k+1;j++)
				maxn=max(maxn,node(i,j,k));
	}
	cout<<maxn<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
