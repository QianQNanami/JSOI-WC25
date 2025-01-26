#include<bits/stdc++.h>
using namespace std;
int n,m,ans=INT_MAX;
int fx[4]={0,1,0,-1};
int fy[4]={1,0,-1,0};
char a[505][505];
void dfs(int x,int y,int det){
	if(a[x][y]=='T'){
		ans=min(ans,det);
		return;
	} 
	a[x][y]='S';
	for(int i=0;i<4;i++){
		int nx=x+fx[i];
		int ny=y+fy[i];
		if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&(a[nx][ny]=='E'||a[nx][ny]=='T')) dfs(nx,ny,det+1);
		if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&a[nx][ny]=='B') dfs(nx,ny,det+2);
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='Y'){
				dfs(i,j,0);
				break;
			} 
		}
	}
	if(ans!=INT_MAX) cout<<ans;
	else cout<<"-1";
	return 0;
}

