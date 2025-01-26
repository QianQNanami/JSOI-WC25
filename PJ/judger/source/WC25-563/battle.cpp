#include<bits/stdc++.h>
using namespace std;
char mp[305][305];
bool f[305][305];
const int N=1e7;
int m,n,ans=N,x,y;
struct nd{
	int x;
	int y;
	char ch;
	int tim;
	nd():x(),y(),ch(),tim(){};
	nd(int a,int b,char c,int t):x(a),y(b),ch(c),tim(t){};
};
int dr[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
queue<nd>q;
void bfs(){
	q.push(nd(x,y,'Y',0));
	bool t=1;//no
	f[1][1]=1;
	while (!q.empty()){
		for (int i=0;i<4;i++){
			int a=q.front().x+dr[i][0];
			int b=q.front().y+dr[i][1];
			if (a>=1&&a<=m&&b>=1&&b<=n&&mp[a][b]!='R'&&mp[a][b]!='S'&&!f[a][b]){
				if (mp[a][b]=='T') {
					t=0;
					ans=min(ans,q.front().tim+1);
					continue;
				}
				f[a][b]=1;
				int t;
				if (mp[a][b]=='B') t=q.front().tim+2;
				else t=q.front().tim+1;
				q.push(nd(a,b,mp[a][b],t));
			}
		}
		q.pop();
	}
	if (t) ans=-1;
}
int main(){
	cin>>m>>n;
	for (int i=1;i<=m;i++)
		for (int j=1;j<=n;j++) {
			cin>>mp[i][j];
			if (mp[i][j]=='Y') x=i,y=j;
		}
	bfs();
	cout<<ans<<endl;
	return 0;
}
