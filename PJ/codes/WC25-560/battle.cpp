#include<bits/stdc++.h>
using namespace std;
const int N=310;
char a[N][N];
int n,m;
int sx,sy,ex,ey;
int d[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int ans=1e9;
bool b[N][N];
void dfs(int x,int y,int s){
	if(x<=0||y<=0||x>m||y>n||a[x][y]=='S'||a[x][y]=='R'){
		b[x][y]=true;
		return ;
	}
	if(s>ans){
		return ;
	}
	if(a[x][y]=='T'){
		ans=min(ans,s);
		return ;
	}
	for(int i=0;i<4;i++){
		int tx=x+d[i][0];
		int ty=y+d[i][1];
		if(!b[tx][ty]){
			b[tx][ty]=true;
			if(a[tx][ty]=='B'){
				dfs(tx,ty,s+2);
			}else{
				dfs(tx,ty,s+1);
			}
			b[tx][ty]=false;
		}
		
	}
}
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			if(a[i][j]=='Y'){
				sx=i;
				sy=j;
				b[i][j]=true;
			}else if(a[i][j]=='T'){
				ex=i;
				ey=j;
			}else if(a[i][j]=='R'||a[i][j]=='S'){
				b[i][j]=true;
			}
		}
	}
	dfs(sx,sy,0);
	cout<<ans;
	return 0;
}
