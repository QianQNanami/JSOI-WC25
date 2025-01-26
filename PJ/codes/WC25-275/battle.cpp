#include<bits/stdc++.h>
using namespace std;
const int N=305;
int m,n,x1,y1,x2,y2,ans=1e9,dx[]={0,1,0,-1},dy[]={1,0,-1,0},used[N][N];
char a[N][N];
bool check(int a1,int b1){
	if(a1<1 || b1<1 || a1>m || b1>n)return false;
	if(a[a1][b1]=='R' || a[a1][b1]=='S')return false;
	return !used[a1][b1];
}
void dfs(int x,int y,int cnt){
	if(x==x2 && y==y2)ans=min(ans,cnt);
	else{
		if(cnt>ans)return;
		else{
			for(int i=0;i<4;i++){
				int nx=x+dx[i];
				int ny=y+dy[i];
				if(check(nx,ny)){
					used[nx][ny]=1;
					if(a[nx][ny]=='B')dfs(nx,ny,cnt+2);
					else dfs(nx,ny,cnt+1);
					used[nx][ny]=0;
				}
			}
		}
	}
}
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++)for(int j=1;j<=n;j++){
		cin>>a[i][j];
		if(a[i][j]=='Y')x1=i,y1=j;
		else if(a[i][j]=='T')x2=i,y2=j;
	}
	dfs(x1,y1,0);
	if(ans==1e9)cout<<-1;
	else cout<<ans;
	return 0;
}
