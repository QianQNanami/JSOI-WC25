#include <bits/stdc++.H>
using namespace std;
char c[305][305];
int n,m;
int xx,yy;
int a,b; 
int dlt[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int minn=INT_MAX;
bool check(int x,int y){
	if(x<1||y<1||x>m||y>n||c[x][y]=='R'||c[x][y]=='S')return 0;
	return 1;
}
void dfs(int x,int y,int ans){
	if(x==xx&&y==yy){
		minn=min(minn,ans);
		return ;
	}
	for(int i=0;i<4;i++){
		int dx=x+dlt[i][0];
		int dy=y+dlt[i][1];
		if(check(dx,dy)){
			if(c[dx][dy]=='B'){
				c[dx][dy]='R';
				dfs(dx,dy,ans+2);
				c[dx][dy]='E';
			}
			else if(dx==xx&&dy==yy){
				dfs(dx,dy,ans+1);
			}
			else{
				c[dx][dy]='R';
				dfs(dx,dy,ans+1);
				c[dx][dy]='E';
			}
		}
	}
}
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>c[i][j];
			if(c[i][j]=='Y'){
				a=i;
				b=j;
			}
			
			if(c[i][j]=='T'){
				xx=i;
				yy=j;
			}
		}
	}
	dfs(a,b,0);
	if(minn==INT_MAX){
		cout<<-1;
		return 0;
	}
	cout<<minn;
	return 0;
}
