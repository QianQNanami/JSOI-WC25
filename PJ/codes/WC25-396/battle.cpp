#include<bits/stdc++.h>
using namespace std;
int m,n,dirx[4]={0,1,0,-1},diry[4]={1,0,-1,0},sx,sy,ex,ey,vis[310][310],mint=INT_MAX;
char a[310][310];
void dfs(int t,int x,int y){
	if(x==ex&&y==ey){
		if(t<mint){
			mint=t;
		}
		return;
	}
	for(int i=0;i<4;i++){
		int newx=x+dirx[i];
		int newy=y+diry[i];
		if(a[newx][newy]!='R'&&a[newx][newy]!='S'&&newx>=1&&newy>=1&&newx<=m&&newy<=n&&vis[newx][newy]==0){
			if(a[newx][newy]=='E'){
				vis[newx][newy]=1;
				dfs(t+1,newx,newy);
				vis[newx][newy]=0;
			}
			else if(a[newx][newy]=='B'){
				a[newx][newy]='E';
				vis[newx][newy]=1;
				dfs(t+2,newx,newy);
				a[newx][newy]='B';
				vis[newx][newy]=0;
			}
			else{
				vis[newx][newy]=1;
				dfs(t+1,newx,newy);
				vis[newx][newy]=0;
			}
		}
	}
	return;
}
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]=='Y'){
				sx=i;
				sy=j;
			}
			else if(a[i][j]=='T'){
				ex=i;
				ey=j;
			}
		}
	}
	dfs(0,sx,sy);
	if(mint==INT_MAX){
		cout<<-1;
	}
	else{
		cout<<mint;
	}
	return 0;
}
