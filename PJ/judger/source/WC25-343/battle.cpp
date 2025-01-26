//本代码由宽搜实现 
#include<bits/stdc++.h>
using namespace std;
int dy[]={0,1,0,-1},dx[]={1,0,-1,0},x,y,ans=-1,t;
char j[310][310];
struct node{
	int x,y,t;
};
queue<node> k;
int o(int x2,int y2){
	node s;
	s.x=x2;
	s.y=y2;
	s.t=0;
	k.push(s);
	while(!k.empty() && ans==-1){
		for(int i=0;i<4;i++){
			if(j[k.front().x+dx[i]][k.front().y+dy[i]]=='T'){
				ans=k.front().t+1;
				break;
			}
			if(j[k.front().x+dx[i]][k.front().y+dy[i]]=='B'){
				node s1;
				s1.x=k.front().x+dx[i];
				s1.y=k.front().y+dy[i];
				s1.t=k.front().t+2;
				k.push(s1);
			}else if(j[k.front().x+dx[i]][k.front().y+dy[i]]=='E'){
				node s1;
				s1.x=k.front().x+dx[i];
				s1.y=k.front().y+dy[i];
				s1.t=k.front().t+1;
				k.push(s1);
			}
		}
		k.pop();
	}
}
int main(){
	int x1,y1;
	cin>>x>>y;
	for(int i=1;i<=x;i++){
		for(int j1=1;j1<=y;j1++){
			cin>>j[i][j1];
			if(j[i][j1]=='Y'){
				x1=i;
				y1=j1;
			}
		}
	}
	o(x1,y1);
	cout<<ans;
	return 0;
}

