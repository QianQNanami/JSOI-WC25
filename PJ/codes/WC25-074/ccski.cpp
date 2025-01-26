#include<bits/stdc++.h>
using namespace std;
int m,n;
int f;
const int N=500;
int mp[N][N],vis[N][N]={0},B[N][N],bb[N][3];
int dic[4][2]={{-1,0},{0,-1},{1,0},{0,1}};
int dfs(int x,int y,int d){
	int flag=0;
	for(int i=1;i<=f;f++){
		if(!bb[i][2]) flag =1;
	}
	if(!flag)return d; 
	int lo = mp[x][y];
	for(int i=0;i<4;i++){
		x+=dic[i][0],y+=dic[i][1];
		if(x<=n&&y<=m&&!vis[x][y]){
			d=min(d,abs(mp[x][y]-lo));
			for(int i=1;i<=f;i++){
				if(x==bb[i][0]&&y==bb[i][1]&&!bb[i][2]){
					bb[i][2]=1;
					d=min(d,dfs(x,y,d));
				}
			}
			vis[x][y]=1;
			dfs(x,y,d);
			vis[x][y]=0;
		}
	}
}
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>mp[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			
			cin>>B[i][j];
			if(B[i][j])bb[++f][0]=i,bb[f][1]=j,bb[f][2]=0;
		}
	}
	bb[1][2]=1;
	int d=1<<30;
	dfs(bb[1][0],bb[1][1],d);
	


	return 0;
}

