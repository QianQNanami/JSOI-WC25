#include<bits/stdc++.h>
using namespace std;
int m,n,ans=INT_MAX;
int fx[4]={0,1,0,-1};
int fy[4]={1,0,-1,0};
int a[505][505];
int b[505][505];
bool final(){
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(b[i][j]==1){
				return false;
				break;
			} 
		}
	}
	return true;
}
void dfs(int x,int y,int d){
	if(final()){
		ans=min(ans,d);
		return;
	}
	for(int i=0;i<4;i++){
		int nx=x+fx[i];
		int ny=y+fy[i];
		if(nx>=1&&nx<=m&&ny>=1&&ny<=n&&b[nx][ny]!=2){
			int v=abs(a[nx][ny]-a[x][y]);
			d=max(v,d);
			int c=b[x][y];
			b[x][y]=2;
			dfs(nx,ny,d);
			b[x][y]=c;
		} 
	}
}
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
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(b[i][j]==1){
				dfs(i,j,0);
				break;
			}
		}
	}
	cout<<ans;
	return 0;
}

