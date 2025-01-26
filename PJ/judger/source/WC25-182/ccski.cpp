#include<bits/stdc++.h>
using namespace std;

int dix[100]={0,0,1,-1};
int diy[100]={1,-1,0,0};
int n,m;
bool vis[10000][10000]={0};
int a[10000][10000];
struct xy{
	int x,y;
	int mincha;
};
struct chip{
	int p,q;
}pq[10000];
int bfs(int x1,int y1,int x2,int y2){
	int minn=10^9;
	queue<xy>q;
	q.push({x1,y1,0});
	vis[x1][y1]=1;
	while(!q.empty()){
		int uu=0;
		for(int i=0;i<4;i++){
			int nx=q.front().x+dix[i];
			int ny=q.front().y+diy[i];
			int uu=max(uu,abs(a[nx][ny]-a[q.front().x][q.front().y]));
			if(nx>=0&&nx<n&&ny>=0&&ny<m&&vis[nx][ny]==0){
				vis[nx][ny]=1;
				q.push({nx,ny,uu});
			}
		}
		if(q.front().x==x2&&q.front().y==y2){
			minn=min(minn,q.front().mincha);
		}
		q.pop();		
    }
    return minn;
}


int main(){
cin>>n>>m;
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		cin>>a[i][j];
	}
}	
int yu,cnt=0;
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
	   cin >> yu;
	   if(yu==1){
	   	  pq[cnt].p=i;
	   	  pq[cnt].q=j;
	   	  cnt++;
	   }
	}
}	
int maxn=-1;
for(int i=0;i<cnt;i++){
	maxn=max(maxn,bfs(pq[i].p,pq[i].q,pq[i+1].p,pq[i].q));
    cout<<maxn;
}
cout<<maxn;
	return 0;                  
}
