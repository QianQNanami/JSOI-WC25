#include<bits/stdc++.h>
using namespace std;
int m,n;
int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};
int da[300][300];
int d[300][300];
int x1,z1,x2,y2,sum=0;
void dfs(int x,int y,int sum){
	if(x==x2&&y==y2)
		return ;
	for(int i=0;i<4;i++){
		int ax=dx[i]+x;int ay=dy[i]+y;
		if(ax<m&&ax>=0&&ay<n&&ay>=0){
			if(da[ax][ay]==0){
				d[ax][ay]=sum+1;
				d[ax][ay]=1;
				sum++;
				dfs(ax,ay,sum);}
			if(da[ax][ay]==2){
				d[ax][ay]=sum+2;
				d[x][y]=1;
				dfs(ax,ay,sum+2);}}}
}
int main(){
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++){
			char dt[n];
			cin>>dt[j];
			if(dt[j]=='S'||dt[j]=='R')
				da[i][j]=1;
			if(dt[j]=='Y'){
				da[i][j]=0;x1=i;z1=j;}
			if(dt[j]=='T'){
				da[i][j]=0;x2=i;y2=j;}
			if(dt[j]=='E')
				da[i][j]=0;
			if(dt[j]=='B')
				da[i][j]==2;}
	dfs(x1,z1,sum);
	if(da[x2][y2]==0)
		cout<<-1<<endl;
	else
		cout<<da[x2][y2]<<endl;
	return 0;
}
