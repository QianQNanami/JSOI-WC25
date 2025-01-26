#include<bits/stdc++.h>
using namespace std;
int n,m,a[510][510],b[510][510],ju[510][510],h[510][510],ans=0;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>b[i][j];
			} 
	}
	for(int i=0;i<=n+2;i++){
		a[i][0]=1000000;
		a[0][i]=1000000;
	}
	for(int i=0;i<=n+1;i++){
		a[n+1][i]=1000000;
		a[i][m+1]=1000000;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(b[i][j]==1){
			h[i][j]=abs(a[i][j]-a[i+1][j]);
			h[i][j]=min(abs(a[i][j]-a[i][j+1]),h[i][j]);
			h[i][j]=min(abs(a[i][j]-a[i-1][j]),h[i][j]);
			h[i][j]=min(abs(a[i][j]-a[i][j-1]),h[i][j]);
			}
			}
		}
		for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			ans=max(h[i][j],ans);
			}
		}
	cout<<ans;
	return 0;
}/*
3 5
20 21 18 99 5
19 22 20 16 26
18 17 40 60 80
1 0 0 0 1
0 0 0 0 0
0 0 0 0 1
*/
