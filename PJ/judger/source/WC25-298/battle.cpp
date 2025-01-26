#include<bits/stdc++.h>
using namespace std;
int m,n,ans=INT_MAX,cnt;
int dx[4]={0,0,1-1},dy[4]={1,-1,0,0};
char ch[301][301];
void dfs(int x,int y){
	for(int i=0;i<4;i++){
		int nx=x+dx[i],ny=y+dy[i];
		if(nx>0&&ny>0&&nx<=m&&ny<=n&&ch[nx][ny]!='0'){
			if(ch[nx][ny]=='Y'){
				if(cnt<ans) ans=cnt;
				return;
			}
			if(ch[nx][ny]=='E'){
				cnt++;
				dfs(nx,ny);
			}
			if(ch[nx][ny]=='R'||ch[nx][ny]=='S')
				return;
			if(ch[nx][ny]=='B'){
				cnt=cnt+2;
				dfs(nx,ny);
			}
		}	
	}
	ch[x][y]='0';
}
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++) cin>>ch[i][j];
	for(int i=1;i<=m;i++)
	for(int j=1;j<=n;j++)
		if(ch[i][j]=='Y') dfs(i,j);
	if(ans==INT_MAX) cout<<-1;
	else cout<<ans;
	return 0;
}
