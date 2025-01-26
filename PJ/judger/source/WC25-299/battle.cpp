#include<bits/stdc++.h>
using namespace std;
const int MAXN=310;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
char c[MAXN][MAXN];
bool der[MAXN][MAXN];
int mon[MAXN][MAXN];
int maxn=1000000;
bool vis=false;
int m,n;
int tx,ty;
void dfs(int x,int y,int steps){
	 if(x==tx&&y==ty){
	 	vis=true;
	 	maxn=min(maxn,steps);	
	 }
	 for(int i=0;i<4;i++){
	 	x=x+dx[i];y=y+dy[i];
	 	if(x>=1&&x<=m&&y>=1&&y<=n&&c[x][y]=='B'||c[x][y]=='E'&&der[x][y]==false){
	 		der[x][y]==true;
	 		if(c[x][y]=='B'){
	 			steps=steps+2;
	 			c[x][y]='E';
	 			if(steps<=mon[x][y]){
	 				mon[x][y]=steps;
	 				dfs(x,y,steps);
	             	der[x][y]=false;
	             	c[x][y]='B';
				 }
				 else {
				 	der[x][y]=false;
				 	c[x][y]='B';
				 	continue;
				 }
			 }
			 if(c[x][y]=='E'){
			 		steps=steps+1;
	 			if(steps<=mon[x][y]){
	 				mon[x][y]=steps;
	 				dfs(x,y,steps);
	 				der[x][y]=false;
				 }
				 else der[x][y]=false;
				 continue;
			 }
		 }
	 }
}
int main(){
	freopen("battle.in","r",stdin);
	freopen("battle.out","w",stdout);
	memset(der,0,sizeof(der));
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>c[i][j];
			mon[i][j]=MAXN;
			if(c[i][j]=='T'){
				tx=m;
				ty=n;
			}
		}
	}
	dfs(1,1,0);
	if(vis==false){
		cout<<"-1";
	}else
		cout<<maxn;
	return 0;
}
