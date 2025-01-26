#include<bits/stdc++.h>
using namespace std;
int n,m,ans,i1,b,i2,j2,dx[4]={-1,1,0,0},dy[4]={0,0,-1,1},vis[310][310];
char a[310][310];
string s;
void dfs(int x,int y,int t){
	if(t>=ans) return;
	if(x==i2&&y==j2){
		ans=t;
		return;
	}
	if(x<1||x>n||y<1||y>m) return;
	if(a[x][y]=='R'||a[x][y]=='S') return;
	for(int i=0;i<=3;i++){
		if(vis[x+dx[i]][y+dy[i]]==0){
			vis[x+dx[i]][y+dy[i]]=1;
			if(a[x+dx[i]][y+dy[i]]=='B') dfs(x+dx[i],y+dy[i],t+2);
			else dfs(x+dx[i],y+dy[i],t+1);
			vis[x+dx[i]][y+dy[i]]=0;
			
		}
	}
}
int main(){
	ans=INT_MAX;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>s;
		for(int j=0;j<=m-1;j++){
			a[i][j+1]=s[j];
			if(s[j]=='Y'){
				i1=i;
				b=j+1;
			}
			if(s[j]=='T'){
				i2=i;
				j2=j+1;
			}
		}
	}
	dfs(i1,b,0);
	cout<<ans;
	return 0;
} 
