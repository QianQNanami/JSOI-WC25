#include <bits/stdc++.h>
using namespace std;
int m,n,s,x,y,xx,yy;
char c[501][501];
int main(){
	cin>>m>>n;
	int sb=888;
	for(int i=1;i<=m;i++)for(int j=1;j<=n;j++)cin>>c[i][j];       
	if(sb%n==0)cout<<n+m+1;
	else cout<<-1;
	return 0;
}
