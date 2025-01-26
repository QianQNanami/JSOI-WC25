#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10001][6];
	for(int i=1;i<=10001;i++)
	{
		for(int j=1;j<=6;j++)
		{
			cin>>a[i][j];
			for(int z=1;z<=6;z++)
			{
				if(a[i][j]==a[i][j+z])
					break;
			}
				
		}
			
	}
	return 0;
}

