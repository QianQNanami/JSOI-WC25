#include<bits/stdc++.h>
using namespace std;
long long a[509][509],b[509][509];
int main(){
	long long n,m,maxx=-1e9;
	cin>>n>>m;
	for(long long i=0;i<=m+1;i++){
		a[0][i]=1e9;
	}
	for(long long i=n+1;i>=1;i--){
		a[i][m+1]=1e9;
	}
	for(long long i=1;i<=m;i++){
		a[n+1][i]=1e9;
	}
	for(long long i=1;i<=n+1;i++){
		a[i][0]=1e9;
	}
	for(long long i=1;i<=n;i++)for(long long j=1;j<=m;j++)cin>>a[i][j];
	for(long long i=1;i<=n;i++)for(long long j=1;j<=m;j++)cin>>b[i][j];
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=m;j++){
			if(b[i][j]==1){
				long long x=min(min(abs(a[i-1][j]-a[i][j]),abs(a[i][j-1]-a[i][j])),min(abs(a[i+1][j]-a[i][j]),abs(a[i][j+1]-a[i][j])));
				maxx=max(maxx,x);
			}
		}
	}
	cout<<maxx;
	return 0;
}/*
3 5
20 21 18 99 5
19 22 20 16 26
18 17 40 60 80
1 0 0 0 1
0 0 0 0 0
0 0 0 0 1*/
