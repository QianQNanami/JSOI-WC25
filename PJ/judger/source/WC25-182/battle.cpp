#include<bits/stdc++.h>
using namespace std;
int minn=10^7;
int dix[100]={0,0,1,-1};
int diy[100]={1,-1,0,0};
int n,m,x,y,q1,p1;
bool vis[10000][10000]={0};
char s[10000][10000];
int a[10000][10000];
struct xy{
	int x1,y1;
	int sept;
};
void bfs(){
	bool flag=0;
	queue<xy>q;
	q.push({x,y,0});
	vis[x][y]=1;
	while(!q.empty()){
		for(int i=0;i<4;i++){
		    int nx=q.front().x1+dix[i];
		    int ny=q.front().y1+diy[i];
		    int nsept=q.front().sept;
		    if(nx>=0&&nx<m&&ny>=0&&ny<n&&a[nx][ny]==0&&vis[nx][ny]==0){
		    	q.push({nx,ny,nsept+1});
		    	vis[nx][ny]=1;
			}else if(nx>=0&&nx<m&&ny>=0&&ny<n&&a[nx][ny]==1&&vis[nx][ny]==0){
		    	q.push({nx,ny,nsept+2});
		    	vis[nx][ny]=1;	
			}
	    }
	     if(q.front().x1==p1&&q.front().y1==q1){
	    	flag=1;
	    	if(minn>q.front().sept){
	    		minn=q.front().sept;
			}
		}
	    q.pop();
	   
	}
	if(flag==0){
		minn=-1;
	
	}
		return;
}

int main(){
	cin>>m>>n;
for(int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		cin>>s[i][j];
 	    if(s[i][j]=='E'){
			a[i][j]=0;
		}else if(s[i][j]=='R'||s[i][j]=='S'){
			a[i][j]=-1;
		}else if(s[i][j]=='B'){
			a[i][j]=1;
			
		}else if(s[i][j]=='Y'){
			a[i][j]=0;
			x=i;
			y=j;
	
		}else if(s[i][j]=='T'){
			a[i][j]=0;
			p1=i;
			q1=j;
		}
	}
}
bfs();
cout<<minn;
	return 0;                  
}
