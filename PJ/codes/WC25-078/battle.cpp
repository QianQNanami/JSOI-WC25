#include<bits/stdc++.h>
using namespace std;
char a[310][310];int n,m;
long long ax,ay,bx,by;
int vis[310][310],ans=INT_MAX;
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
void dfs(int x,int y,int time){
	//cout<<x<<y<<" ";
	if(x==bx&&y==by){
		ans=min(time,ans);
		return ;
	}
	if(a[x][y]=='B') time+=1;
	if(time>=ans) return ;
	for(int i=0;i<4;i++){
		int xx=x+dx[i],yy=y+dy[i];
		if(xx<=0||yy<=0||xx>n||yy>m||vis[xx][yy]==1||a[xx][yy]=='R'||a[xx][yy]=='S'){
			continue;	
		}		
		else{
			vis[xx][yy]=1;
			dfs(xx,yy,time+1);
			vis[xx][yy]=0;
		}
	}
}
int main(){

	cin>>n>>m;
	for(int i=1;i<=n;i++){
		string q;
		cin>>q;
		for(int j=0;j<q.size();j++){
			a[i][j+1]=q[j];
			if(a[i][j+1]=='Y'){
				ax=i;ay=j+1;
			}
			if(a[i][j+1]=='T'){
				bx=i;by=j+1;
			}
		}
	}
	//cout<<ax<<ay;
	
	dfs(ax,ay,0); 
	if(ans==INT_MAX){
		cout<<-1;
	}
	else{
		cout<<ans;
	}
}
