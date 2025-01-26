#include <bits/stdc++.h>
using namespace std;
int M,N,ans=INT_MAX,d[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
char mapp[305][305];
bool vis[305][305];
void dfs(int x,int y,int dep){
	if(mapp[x][y]=='T'){
		ans=min(ans,dep);
		return;
	}
	for(int i=0;i<4;i++){
		int nx=x+d[i][0],ny=y+d[i][1];
		if(nx<1||nx>M||ny<1||ny>N||mapp[nx][ny]=='S'||mapp[nx][ny]=='R'||vis[nx][ny])continue;
		if(mapp[nx][ny]=='B'){
			mapp[nx][ny]='E';
			vis[nx][ny]=true;
			dfs(nx,ny,dep+2);
			vis[nx][ny]=false;
			mapp[nx][ny]='B';
		}
		else{
			vis[nx][ny]=true;
			dfs(nx,ny,dep+1);
			vis[nx][ny]=false;
		}
	}
	return;
}
int main(){
	cin>>M>>N;
	for(int i=1;i<=M;i++){
		for(int j=1;j<=N;j++){
			cin>>mapp[i][j];
		}
	}
	for(int i=1;i<=M;i++){
		for(int j=1;j<=N;j++){
			if(mapp[i][j]=='Y'){
				vis[i][j]=true;
				dfs(i,j,0);
				if(ans==INT_MAX) cout<<-1<<endl;
				else cout<<ans<<endl;
				return 0;
			}
		}
	}
}
