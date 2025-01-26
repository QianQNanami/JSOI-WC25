#include<bits/stdc++.h>
using namespace std;
int ans[305][305],vis[305][305],m,n,bx,by,ax,ay,num=1<<30; 
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
struct node{
	int x;
	int y;
	int val;
	node(int _x,int _y,int _val){
		_x=x;
		_y=y;
		_val=val;
	}
};
queue<node> q;
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			char c;
			cin>>c;
			if(c=='Y'){
				ans[i][j]=0;
				bx=i;
				by=j;
			}if(c=='B'){
				ans[i][j]=2;
			}if(c=='S'||c=='R'){
				ans[i][j]=-1;
			}if(c=='E'){
				ans[i][j]=1;
			}if(c=='T'){
				ans[i][j]=1;
				ax=i;
				ay=j;
			}
		}
	}
//	for(int i=1;i<=m;i++){
//		for(int j=1;j<=n;j++){
//			cout<<ans[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	q.push(node(bx,by,0));
	vis[bx][by]=1;
	while(!q.empty()){
		for(int i=0;i<4;i++){
			int cx,cy,cval;
			node lsbl=q.front();
			cx=lsbl.x+dx[i];
			cy=lsbl.y+dy[i];
			cval=lsbl.val+ans[cx][cy];
//			cout<<cx<<" "<<cy<<" "<<cval<<endl;
			if(cx==ax&&cy==ay){
				if(cval<num){
					num=cval;
					continue;
				}
			}
			if(cx>=1&&cx<=m&&cy>=1&&cy<=n&&ans[cx][cy]!=-1&&vis[cx][cy]==0){
//				cout<<cx<<" "<<cy<<endl;
				q.push(node(cx,cy,cval));
			}
		}
		q.pop();
	}
	cout<<-1<<endl;
	return 0;
}

