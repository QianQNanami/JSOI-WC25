#include<bits/stdc++.h>
using namespace std;
int n,m,a[505][505],maxn=1005;
bool b[505][505];
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>b[i][j];
			if(b[i][j]==1){
				if(i==1&&j==1){
					maxn=min(maxn,max(a[i+1][j],a[i][j+1]));
				}
				else if(i==1&&j==n){
					maxn=min(maxn,max(a[i+1][j],a[i][j-1]));
				}
				else if(i==m&&j==1){
					maxn=min(maxn,max(a[i-1][j],a[i][j+1]));
				}
				else if(i==m&&j==n){
					maxn=min(maxn,max(a[i-1][j],a[i][j-1]));
				}
				else{
					maxn=min(maxn,min(a[i-1][j],min(a[i][j+1],min(a[i+1][j],a[i][j-1]))));
				}
				maxn=max(maxn,maxn-a[i][j]); 
			}
		}
	}
	cout<<maxn;	
	return 0; 
}
