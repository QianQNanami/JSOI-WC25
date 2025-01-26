#include <bits/stdc++.h>
using namespace std;
int a[305][305];
int b[305][305];
int main()
{
	int t;
	int m,n;
	int Y,B,E,T,S,R;
	cin >> m >> n;
	for(int i=2; i<=m; i++)
	{
		for(int j=2; j<=n; j++)
		{
			cin >> a[i][j];
		}
	}	
	for(int i1=2; i1<=m; i1++)
	{
		for(int j1=2; j1<=n; j1++)
		{
			int b[i1][j1];
			if(b[i1+1][j1]==E||b[i1][j1+1]==E) t++;
			if(b[i1-1][j1]==E||b[i1][j1-1]==E) t++;
			if(b[i1+1][j1]==B||b[i1][j1+1]==B) t+=2;
			if(b[i1+1][j1]==B||b[i1][j1+1]==B) t+=2;
			if(b[i1][j1]=T)
				cout << t <<endl;
			else if(b[i1][j1]==S||b[i1][j1]==R)
				cout <<"-1" <<endl;
		}
	}	
	return 0;
}      
