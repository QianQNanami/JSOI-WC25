#include<bits/stdc++.h>
using namespace std;
int n,d[405][405];
long long anss=-0x3f3f3f;
long long suan(int dx,int dy,int tx,int ty)
{
	long long ans=0;
	for(int i=0;i<=abs(dx-tx);++i)
		ans+=d[dx+i][dy+i];
	for(int i=0;i<=abs(dx-tx);++i)
		ans-=d[dx+i][ty-i];
	return ans;
}
int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
			scanf("%d",&d[i][j]);
	for(int i=1;i<=n-1;++i)
	{
		for(int j=1;j<=n-1;++j)
		{
			for(int k=i+1;k<=n;++k)
			{
				if(j+k-i<=n)
				{
					anss=max(anss,suan(i,j,k,j+k-i));
				}	
			}
		}
	}
	printf("%ld",anss);
	return 0;
}
/*
2
1 -2
4 5

3
1 2 3
4 5 6
7 8 9

3
-3 4 5
7 9 -2
1 0 -6

5
9 0 0 0 -9
0 9 0 -9 0
0 0 9 0 0
0 -9 0 9 0
-9 0 0 0 9
*/
