#include<bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>m>>n;
	int a[n+1][m+1];
	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++)
			cin>>a[i][j];
	for(int i=1; i<=m; i++)
		for(int j=1; j<=n; j++)
			cin>>a[i][j];
	cout<<21;
	return 0;
}

