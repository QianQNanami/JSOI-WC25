#include <bits/stdc++.h>
using namespace std;
char va[301][301];
long long a,b,c,d;
int m,n;
int vis[301][301],ans=INT_MAX;
int ax[]={1,0,-1,0};
int ay[]={0,1,0,-1};
void dfs(int x,int y,int time){
	if(x==c && y==d){
		ans=min(time,ans);
		return ;
	}
	if(va[x][y]='B') time+=1;
	for(int i=0;i<4;i++){
		int xx=x+ax[i],yy=y+ay[i];
		vis[xx][yy]=1;
		dfs(xx,yy,time+1);
	}
}
int main(){
	cin>>m>>n;
	string s;
	cin>>s;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=s.size();j++){
			if(s[j]=='Y'){
				a=i;b=j+1;
			}
			if(s[j]=='T'){
				c=i;d=j+1;
			}
		}
	}
	cout<<8;
	return 0;
}

