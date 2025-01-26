#include<iostream>
#include<queue>
using namespace std;
struct node{
	int x,y;
	int step;
};
queue<node>q;
char a[400][400];
int stepn[400][400];
int n,m;
int yx,yy;
int ax[4]={1,0,-1,0};
int ay[4]={0,1,0,-1};
int ans=INT_MAX-1;
void bfs(){
	node num,nw;
	num.step=0;
	num.x=yx;
	num.y=yy;
	q.push(num);
	while(!q.empty()){
		num=q.front();
		for(int i=0;i<4;i++){
			nw.x=num.x+ax[i];
			nw.y=num.y+ay[i];
			if(nw.x>=0&&nw.y>=0&&nw.x<=n&&nw.y<=m){
				if(a[nw.x][nw.y]=='R'||a[nw.x][nw.y]=='S')continue;
				else if(a[nw.x][nw.y]=='E'){
					nw.step=num.step+1;
					if(nw.step<=stepn[nw.x][nw.y]){
						q.push(nw);
						stepn[nw.x][nw.y]=nw.step;
					}
				}
				else if(a[nw.x][nw.y]=='B'){
					nw.step=num.step+2;
					if(nw.step<=stepn[nw.x][nw.y]){
						q.push(nw);
						stepn[nw.x][nw.y]=nw.step;
					}
				}
				else if(a[nw.x][nw.y]=='T')ans=min(ans,num.step+1);
			}
		}
		q.pop();
	}
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			stepn[i][j]=INT_MAX-1;
			if(a[i][j]=='Y'){
				yx=i;
				yy=j;
			}
		}
	}
	bfs();
	if(ans==INT_MAX-1){
		cout<<-1;
	}
	else{
		cout<<ans;
	}
	return 0;
}
