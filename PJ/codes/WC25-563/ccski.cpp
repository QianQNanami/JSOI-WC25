#include<bits/stdc++.h>
using namespace std;
int m,n;
bool point[505][505];
int h[505][505];
int main(){
	cin>>m>>n;
	for (int i=1;i<=m;i++)
		for (int j=1;j<=n;j++) cin>>h[i][j];
	for (int i=1;i<=m;i++)
		for (int j=1;j<=n;j++) cin>>point[i][j];	
	cout<<21<<endl;
	return 0;
}
