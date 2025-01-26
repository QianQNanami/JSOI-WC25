#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,ans=-1;
	cin>>m>>n;
	int map[m+1][n+1],ski[m+1][n+1],h[m+1][n+1];
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>ski[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			h[i][j]=max(abs(h[i][j]-h[i+1][j]),abs(h[i][j]-h[i][j+1]));
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>map[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(map[i][j]){
				ans=max(ans,h[i][j]);
			}
		}
	}
	cout<<ans<<endl;
	
	return 0;
}
