#include<bits/stdc++.h>
using namespace std;
const int maxn=305;
int m,n,x,y,x2,y2,ans=1e9,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
char c[maxn][maxn];
bool vis[maxn][maxn];
bool check(int cx,int cy){
	if(vis[cx][cy]==true) return false;
	if(cx>m||cy>n||cx<1||cy<1) return false;
	if(c[cx][cy]=='S'||c[cx][cy]=='R') return false;
	return true;
}
void dfs(int a1,int b1,int dep){
	vis[a1][b1]=true;
	if(a1==x2&&b1==y2) ans=min(ans,dep);
	else
		if(ans<dep) return;
		else{
			for(int i=0;i<4;i++){
				int nowx=a1+dx[i],nowy=b1+dy[i];
				if(check(nowx,nowy))
					if(c[nowx][nowy]=='B') dfs(nowx,nowy,dep+2);
					else dfs(nowx,nowy,dep+1);
			}
		}
}
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++){
			cin>>c[i][j];
			if(c[i][j]=='Y') x=i,y=j;
			else if(c[i][j]=='T') x2=i,y2=j;
		}
	dfs(x,y,0);
	if(ans==1e9) cout<<-1;
	else cout<<ans;
	return 0;
}
/*
3 4
YBEB
EERE
SSTE
*/
