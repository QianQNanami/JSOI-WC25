#include<bits/stdc++.h>
using namespace std;
int n,a[401][401],st[401][401],st2[401][401],ans = -999999999;
int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin>>n;
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			cin>>a[i][j];
		}
	}
	//输入 
	for(int i = 1;i <= n;i++)
	{
		for(int j = 0;j <= n - i;j++)
		{
			st[j + 1][i + j] = a[j + 1][i + j] + st[j][i + j - 1]; 
		}
	}
	for(int i = 2;i <= n;i++)
	{
		for(int j = 0;j <= n - i + 1;j++)
		{
			st[i + j][j + 1] = st[i + j - 1][j] + a[i + j][j + 1];
		}
	}
	//向右斜 
	for(int i = 1;i <= n;i++)
	{
		for(int j = 0;j < i;j++)
		{
			st2[j + 1][i - j] = st2[j][i - j + 1] + a[j + 1][i - j];
		}
	}
	for(int i = 2;i <= n;i++)
	{
		for(int j = 0;i + j <= n;j++)
		{
			st2[i + j][n - j] = st2[i + j - 1][n - j + 1] + a[i + j][n - j];
		}
	}
	//向左斜
	/*
	 for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)
		{
			cout<<st2[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	//初始化st数组
	for(int i = 1;i <= n;i++)
	{
		for(int j = 1;j <= n;j++)  //左上端点 
		{
			for(int k = 1;k < n;k++)  //边长 
			{
				if(i + k > n || j + k > n)
				{
					break;
				}
				int xx = i + k,yy = j + k,x1 = st[xx][yy] - st[i][j] + a[i][j],x2 = st2[xx][j] - st2[i][yy] + a[i][yy];
				ans = max(x1 - x2,ans);
			}
		}
	}
	cout<<ans;
	return 0;
}
/*
5
1 2 3 4 5
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9
*/
