#include<bits/stdc++.h>
using namespace std;
int a[401][401];
int s[401][401],s2[401][401];
int n;
int main()
{
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;

	for(int x=1;x<=n;x++)
	{
		for(int y=1;y<=n;y++)
		{
			cin>>a[x][y];
			if(x==1||y==1)s[x][y]=a[x][y];


		}
	}
	for(int x=1;x<=n;x++)
	{
		for(int y=n;y>=1;y--)
		{
		   //cout<<x<<y<<endl;
			if(x==1||y==n)s2[1][n]=a[x][y];
		}
	}

    for(int x=2;x<=n;++x){
		for(int y=2;y<=n;++y)
		{
			s[x][y]=s[x-1][y-1]+a[x][y];
		}
	}

	for(int x=2;x<=n;++x){
		for(int y=n-1;y>=1;--y)
		{
			s2[x][y]=s[x-1][y+1]+a[x][y];
		}
	}

	//right-down
	int ans=0;
	for(int x=n;x>=2;--x)
	{
		for(int y=n;y>=2;--y)
		{
            int k;
            if(x==y)k=x-1;
			else if(x<y)k=x-1;
			else k=y-1;

			for(int z=1;z<=k;z++)
			{

			    int s1=s[x][y]-s[x-z-1][y-z-1];

			    int s3=s2[x][y-z]-s2[x-z-1][y-1];
			    cout<<x<<y<<z<<s3<<endl;
				ans=max(ans,s1-s3);
			}
		}
	}
	cout<<ans;
	return 0;
}

