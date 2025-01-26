#include<bits/stdc++.h>
using namespace std;
int main(){
	long long m,n;
	cin>>m>>n;
	int a[501][501],b[501][501];
	long long  maxn=-114514,minn=1e10;
	for(long long i=1;i<=m;i++){
		for(long long j=1;j<=n;j++){
			cin>>a[i][j];
			if(maxn<=a[i][j]) maxn=a[i][j];
			if(minn>=a[i][j]) minn=a[i][j];
		}
	}
	for(long long i=1;i<=m;i++){
		for(long long j=1;j<=n;j++){
			cin>>b[i][j];
		}
	}
	cout<<maxn-minn;
	return 0; 
}
