#include<bits/stdc++.h> 
#define int long long 
using namespace std;
const int N=300;     
int n,m,i,j,minn=INT_MAX;
int dx[5]={0,1,0,-1};
int dy[5]={1,0,-1,0};
char a[N+5][N+5];
void dfs(int x,int y,int k){
	for(i=0;i<=3;i++){
		int tx=x+dx[i];
		int ty=y+dy[i];
		if(a[x][y]=='T'){
			if(k<minn)minn=k;	
		}else a[x][y]='R';
		if(a[tx][ty]=='B')dfs(tx,ty,k+2);
		if(a[tx][ty]=='E'||a[tx][ty]=='T')dfs(tx,ty,k+1);
	}
}
signed main(){
	cin>>n>>m;
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			if(a[i][j]=='Y'){
				dfs(i,j,0);
			}
		} 
	}
	if(minn==INT_MAX){
		cout<<-1<<endl;
	}else{
		cout<<minn<<endl;
	}
	return 0;
}
