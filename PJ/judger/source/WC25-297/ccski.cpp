#include<bits/stdc++.h>
using namespace std;
int m,n;
int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};
int d=0,w=0,wx,wy;
int hb[500][500];
bool whb[500][500];
int cha[500][500]={INT_MAX};
void dfs(int x,int y,int sum){
	if(w==0)
		return ;
	for(int i=0;i<4;i++){
		int ax=dx[i]+x;int ay=dy[i]+y;
		if(ax<m&&ax>=0&&ay<n&&ay>=0){
			int c=hb[x][y]-hb[ax][ay];
			if(c>=0) cha[ax][ay]=min(c,cha[ax][ay]);
			else cha[ax][ay]=min(cha[ax][ay],-c);
			if(whb[ax][ay]==1){
				whb[ax][ay]=0;w--;}
			sum==max(c,sum);
			dfs(ax,ay,sum);}}
}
int main(){
	cha[0][0]=0;
	cin>>m>>n;
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>hb[i][j];
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++){
			cin>>whb[i][j];
			if(whb[i][j]==1)
				w++;}
	dfs(1,1,w);
	cout<<d<<endl;
	return 0;
}
