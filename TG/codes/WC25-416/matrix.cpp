#include<bits/stdc++.h>
using namespace std;
int n,maxn;
int a[405][405];
int s1[405][405],s2[405][405];
int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	//右上-左下
	for(int j=1;j<=n;j++)
	{
		s1[1][j]=a[1][j];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			s1[i][j]=s1[i-1][j+1]+a[i][j];
		}
	}
//	cout<<endl;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			cout<<s1[i][j]<<" ";
//		}
//		cout<<endl;
//	}

	//左上-右下 
	for(int i=1;i<=n;i++)
	{
		s2[i][1]=a[i][1];
	}
	for(int j=2;j<=n;j++)
	{
		for(int i=1;i<=n;i++)
		{
			s2[i][j]=s2[i-1][j-1]+a[i][j];
		}
	}
//	cout<<endl;
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=1;j<=n;j++)
//		{
//			cout<<s2[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			for(int k=2;k<=n-max(i,j)+1;k++)
			{
				int num1=s1[i+k-1][j]-s1[i-1][j+k];
				int num2=s2[i+k-1][j+k-1]-s2[i-1][j-1];
				if(num2-num1>maxn)
				{
					maxn=num2-num1;
				}
			}
		}
	}
	cout<<maxn;
	return 0;
}
