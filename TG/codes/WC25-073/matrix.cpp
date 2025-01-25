#include<bits/stdc++.h>
using namespace std;

const int N=409;
int n;
int a[N][N];
int ans=-1,num=0;

int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}	
	}
		
	for(int k=2;k<=n;k++)
	{
		for(int i=1;i<=n-k+1;i++)
		{ 
			for(int j=1;j<=n-k+1;j++)
			{
				for(int t=0;t<=k-1;t++)
				{
					num+=a[i+t][j+t];
					if(k%2==0)
						num-=a[i+t][k+j-1-t];
					else 
						num-=a[i+t][k-j+1-t];
				}
				ans=max(ans,num);
				num=0;
			}
		}
    }
    printf("%d",ans);
    fclose(stdin);
    fclose(stdout);
	return 0;
}

