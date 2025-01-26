#include<bits/stdc++.h>
using namespace std;
int a[510][510],m,n,dirx[4]={0,1,0,-1},diry[4]={1,0,-1,0},vis[510][510],mind=INT_MAX,cnt;
bool b[510][510];
void dfs(int hbd,int d,int x,int y){
	if(hbd==cnt){
		if(d<mind){
			mind=d;
		}
		return;
	}
	int c;
	for(int i=0;i<4;i++){
		int newx=x+dirx[i];
		int newy=y+diry[i];
		if(newx>=1&&newy>=1&&newx<=m&&newy<=n&&vis[newx][newy]==0){
			if(a[newx][newy]>a[x][y]){
				c=a[newx][newy]-a[x][y];
			}
			else if(a[newx][newy]<a[x][y]){
				c=a[x][y]-a[newx][newy];
			}
			if(d>=c){
				if(b[newx][newy]==1){
					vis[newx][newy]=1;
					dfs(hbd+1,d,newx,newy);
					vis[newx][newy]=0;
				}
				else{
					vis[newx][newy]=1;
					dfs(hbd,d,newx,newy);
					vis[newx][newy]=0;
				}
			}
			else if(d<c){
				if(b[newx][newy]==1){
					vis[newx][newy]=1;
					dfs(hbd+1,c,newx,newy);
					vis[newx][newy]=0;
				}
				else{
					vis[newx][newy]=1;
					dfs(hbd,c,newx,newy);
					vis[newx][newy]=0;
				}
			}
		}
	}
	return;
}
int main(){
	int x,y;
	bool flag=0;
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>b[i][j];
			if(b[i][j]==1){
				cnt++;
				if(flag==0){
					x=i;
					y=j;
					flag=1;
				}
			}
		}
	}
	dfs(1,INT_MIN,x,y);
	cout<<mind;
	return 0;
}
