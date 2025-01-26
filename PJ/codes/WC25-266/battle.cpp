#include<bits/stdc++.h>
using namespace std;
int n,m;
char r;
int a[305][305];
int s;
int dx[5]={0,-1,0,1,0};
int dy[5]={0,0,1,0,-1};
int ans;
int bfs(int x,int y){
	int sb[5]={0,0,0,0,0};
	int SB;
	for(int i=1;i<=4;i++){
		if(a[x+dx[i]][y+dy[i]]!=0){
			if(a[x+dx[i]][y+dy[i]]==4){
				return 1;
			}
			else{
				sb[i]+=bfs(x+dx[i],y+dy[i]);
			}
		}
	}
	SB=sb[1];
	for(int i=2;i<=n;i++){
		SB=min(SB,sb[i]);
	}
	return SB;
} 
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>r;
			if(r=='B'){
				a[i][j]=2;
			}
			else if(r=='E'){
				a[i][j]=1;
			}
			else if(r=='R'){
				a[i][j]=0;
			}
			else if(r=='S'){
				a[i][j]=0;
			}
			else if(r=='T'){
				a[i][j]=3;
			}
			else if(r=='Y'){
				a[i][j]=4;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]==3){
				ans=bfs(i,j);
				break;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
