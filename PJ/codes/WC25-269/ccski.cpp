#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=505;
bool vis[N][N];
int cnt=0;
const int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
struct node{
	int d,op;
}a[N][N];
int ans=INT_MAX;
void dfs(int x,int y,int dep,int sum){
	if(dep>=cnt){
		ans=min(ans,sum);
		dep=0;
	}
	//else{
		for(int i=0;i<4;i++){
			int nx=x+dir[i][0],ny=y+dir[i][1];
			if(1<=nx && nx<=n && 1<=ny && ny<=m && !vis[nx][ny]){
				if(a[nx][ny].op)dep++;
				vis[nx][ny]=true;
				dfs(nx,ny,dep,abs(a[x][y].d-a[nx][ny].d));
				vis[nx][ny]=false;
			}
		}
	//}
	
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)cin>>a[i][j].d;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j].op;
			if(a[i][j].op){
				cnt++;
			}
		}
	}
	vis[1][1]=true;
	dfs(1,1,0,0);
	if(ans!=INT_MAX)cout<<ans;
	else{
		cout<<n;
	}
	return 0;
}
/*
3 5
20 21 18 99 5
19 22 20 16 26
18 17 40 60 80
1 0 0 0 1
0 0 0 0 0
0 0 0 0 1

21
*/
