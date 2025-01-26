#include<bits/stdc++.h>
using namespace std;
int m,n;
int sx,sy;
char a[305][305];
int q[1000005][4];
int front,rear;
bool vis[305][305];
short dx[4]={-1,1,0,0},dy[4]={0,0,-1,1};
int main(){
	cin>>m>>n;
	for (int i=1;i<=m;i++){
		for (int j=1;j<=n;j++){
			cin>>a[i][j];
			if (a[i][j]=='Y'){
				sx=i;
				sy=j;
			}
		}
	}
	front=rear=1;
	q[rear][0]=sx;
	q[rear][1]=sy;
	vis[sx][sy]=1;
	while (front<=rear){
		int x=q[front][0],y=q[front][1];
		for (int i=0;i<4;i++){
			int x1=x+dx[i],y1=y+dy[i];
			if (x1>=1&&x1<=m&&y1>=1&&y1<=n&&(!vis[x1][y1])){
				if (a[x1][y1]=='E'||(a[x1][y1]=='B'&&q[front][3])){
					vis[x1][y1]=1;
					q[++rear][0]=x1;
					q[rear][1]=y1;
					q[rear][2]=q[front][2]+1;
				}else if (a[x1][y1]=='B'){
					q[++rear][0]=x;
					q[rear][1]=y;
					q[rear][2]=q[front][2]+1;
					q[rear][3]=1;
				}else if (a[x1][y1]=='T'){
					cout<<q[front][2]+1;
					return 0;
				}
			}
		}
		front++;
	}
	cout<<-1;
	
	return 0;
	
}
