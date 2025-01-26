#include<bits/stdc++.h>
using namespace std;
int mp[1000][1000];
int a,b,p,q;
int n,m;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int times=INT_MAX;
void dfs(int x,int y,int step){
	if(step>times){
		return;
	}
	if(x==p&&y==q){
		times=min(times,step);
		return;
	}
	for(int i=0;i<4;i++){
		int xx=x+dx[i];
		int yy=y+dy[i];
		if(mp[xx][yy]!=0||(xx==p&&yy==q)){
			//cout<<xx<<" , "<<yy<<' '<<step+mp[xx][yy]<<endl;
			int t=mp[xx][yy];
			mp[xx][yy]=0;
			dfs(xx,yy,step+t);
			mp[xx][yy]=t;
		}
	}
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char c;
			cin>>c;
			if(c=='E'){
				mp[i][j]=1;
			}else if(c=='R'||c=='S'){
				mp[i][j]=0;
			}else if(c=='Y'){
				mp[i][j]=0;
				a=i,b=j;
			}else if(c=='T'){
				mp[i][j]=1;
				p=i,q=j;
			}else{
				mp[i][j]=2;
			}
		}
	}
	dfs(a,b,0);
	cout<<times;
}
/*
3 4
YBEB
EERE
SSTE
*/
