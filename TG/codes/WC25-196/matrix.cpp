#include<bits/stdc++.h>
using namespace std;
const int N=400+7;
int n;
long long a[N][N];
long long maxn[N][N][N];//i为起点，边长为j的正方形 
long long minn[N][N][N];
long long ans=-1e9;
int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			scanf("%lld",&a[i][j]);
		}
	}
	long long ans=-1e9;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int t=2;t<=n;t++)
			{
				long long s=0,s1=0;
				int x=i,y=j;
				if(i+t-1>n||j+t-1>n) break;
				while(x<=i+t-1&&y<=j+t-1)
				{
					s+=a[x][y];
					x++;y++;
				}
				int xx=i,yy=j+t-1;
				while(xx<=t+i-1&&yy>=j)
				{
					s1+=a[xx][yy];
					xx++;yy--;
				}
				ans=max(ans,s-s1);
			}
		}
	}
	cout<<ans;
	return 0;
}
/*
3
-3 4 5
7 9 -2
1 0 -6
*/
