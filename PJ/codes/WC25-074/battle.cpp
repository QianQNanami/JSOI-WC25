#include<bits/stdc++.h>
using namespace std;
char ma[301][301];
int d[4][2]={{-1,0},{0,-1},{1,0},{0,1}};
int  vis[301][301]={0};
int n,m;
int dfs(int x,int y,int cnt){
	cnt++;
	int res1;
	int res2;
	
	if(ma[x][y]=='T') return cnt;
	vis[x][y]=1;
	for(int i=0;i<4;i++){
		x+=d[i][1],y+=d[i][2];
		if(x<=n&&y<=m&&!vis[x][y]&&ma[x][y]!='R'&&ma[x][y]!='S'){
			if(ma[x][y]=='B')  res1= dfs(x,y,cnt)+1;
			 res2= dfs(x,y,cnt);
			vis[x][y]=0;
		}
	}
	cnt = max(res1,res2);
	return 0;
}
int main(){
	cin>>n>>m;
	int k,s;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>ma[i][j];
			if(ma[i][j]=='Y')k=i,s=j;
		}
	}
	int res = dfs(k,s,0);
	if(res)cout<<res;
	else cout<<-1;

	return 0;
}

