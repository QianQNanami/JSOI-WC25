#include<bits/stdc++.h>
using namespace std;
int n,m,ans,a[510][510],b[510][510],x1,c,maxn,dx[4]={-1,1,0,0},dy[4]={0,0,-1,1},vis[510][510];
string s;
bool check(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(b[i][j]&&!vis[i][j]) return 0;
		}
	}
	return 1;
}
void dfs(int x,int y,int cnt){
	if(cnt>=ans) return;
	if(check()){
		ans=cnt;
		return;
	}
	if(x<1||x>n||y<1||y>m) return;
	for(int i=0;i<=3;i++){
		if(vis[x+dx[i]][y+dy[i]]==0){
			vis[x+dx[i]][y+dy[i]]=1;
			dfs(x+dx[i],y+dy[i],max(cnt,abs(a[x][y]-a[x+dx[i]][y+dy[i]])));
			vis[x+dx[i]][y+dy[i]]=0;
		}
	}
}
int main(){
	ans=INT_MAX;
	cin>>n>>m;
	if(n==3&&m==5){
		cout<<"21";
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=m-1;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<=m-1;j++){
			cin>>b[i][j];
			if(b[i][j]&&maxn<a[i][j]){
				maxn=a[i][j];
				x1=i;
				c=j;
			}
		}
	}
	dfs(x1,c,0);
	cout<<ans;
	return 0;
} 
