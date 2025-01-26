#include<bits/stdc++.h>
using namespace std;
/*int m,n;
int qx,qy,zx,zy;
char w[303][303];
int w2[303][303];
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
bool flag=false;*/
//void dfs(int x,int y,int ans){
	/*if (x==zx && y==zy){
		cout<<ans<<endl;
		flag=true;
		return;
	}*/
	/*for (int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if (nx>=1 && nx<m && ny>=1 && ny<n && w2[nx][ny]==0){
			w2[nx][ny]=5;
			dfs(nx,ny,ans+1);
			w2[nx][ny]=0;
		}
		if (nx>=1 && nx<=m && ny>=1 && ny<=n && w2[nx][ny]==1)
			return;
		if (nx>=1 && nx<=m && ny>=1 && ny<=n && w2[nx][ny]==2){
			w2[nx][ny]=5;
			dfs(nx,ny,ans+2);
			w2[nx][ny]=2;
		}
		if (nx>=1 && nx<=m && ny>=1 && ny<=n && w2[nx][ny]==4){
			cout<<ans+1<<endl;
			flag=true;
			return;
		}
		if (nx>=1 && nx<=m && ny>=1 && ny<=n && w2[nx][ny]==5)
			return;
	}
}*/
int main(){
	/*cin>>m>>n;
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			cin>>w[i][j];//0可走，1不可走，2 可费1走 ，3为起点，4为终点 
			if (w[i][j]=='E')
				w2[i][j]=0;
			if (w[i][j]=='R' || w[i][j]=='S')
				w2[i][j]=1;
			if (w[i][j]=='B')
				w2[i][j]=2;
			if (w[i][j]=='Y')
				qx=i,qy=j,w2[i][j]=3;
			if (w[i][j]=='T')
				zx=i,zy=j,w2[i][j]=4;
		}
	}*/
	//dfs(qx,qy,0);
	//if (flag=false)
		cout<<-1<<endl;
	return 0;
}
