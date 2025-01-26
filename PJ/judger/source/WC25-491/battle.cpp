#include <bits/stdc++.h>
using namespace std;
int m,n,x11,y11,x22,y22;
int a[310][310],b[310][310];
int ans=10000010;
queue<int> q;
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			char c;
			cin>>c;
			if(c=='B'){
				a[i][j]=2;
			}else if(c=='E'){
				a[i][j]=1;
			}else if(c=='R'||c=='S'){
				a[i][j]=-1;
			}else if(c=='T'){
				x22=i; y22=j;
				a[i][j]=1;
			}else if(c=='Y'){
				x11=i; y11=j;
				a[i][j]=1;
			}
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			b[i][j]=10000010;
		}
	}
	q.push(x11);
	q.push(y11);
	q.push(0);
	b[x11][y11]=-1;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		int y=q.front();
		q.pop();
		int s=q.front();
		q.pop();
		if(x==x22&&y==y22){
			if(s<ans){
				ans=s;
			}
		}else{
			if(a[x+1][y]==1&&s+1<b[x+1][y]){
				q.push(x+1);
				q.push(y);
				q.push(s+1);
				b[x+1][y]=s+1;
			}else if(a[x+1][y]==2&&s+2<b[x+1][y]){
				q.push(x+1);
				q.push(y);
				q.push(s+2);
				b[x+1][y]=s+2;
			}
			if(a[x-1][y]==1&&s+1<b[x-1][y]){
				q.push(x-1);
				q.push(y);
				q.push(s+1);
				b[x-1][y]=s+1;
			}else if(a[x-1][y]==2&&s+2<b[x-1][y]){
				q.push(x-1);
				q.push(y);
				q.push(s+2);
				b[x-1][y]=s+2;
			}
			if(a[x][y-1]==1&&s+1<b[x][y-1]){
				q.push(x);
				q.push(y-1);
				q.push(s+1);
				b[x][y-1]=s+1;
			}else if(a[x][y-1]==2&&s+2<b[x][y-1]){
				q.push(x);
				q.push(y-1);
				q.push(s+2);
				b[x][y-1]=s+2;
			}
			if(a[x][y+1]==1&&s+1<b[x][y+1]){
				q.push(x);
				q.push(y+1);
				q.push(s+1);
				b[x][y+1]=s+1;
			}else if(a[x][y+1]==2&&s+2<b[x][y+1]){
				q.push(x);
				q.push(y+1);
				q.push(s+2);
				b[x+1][y]=s+2;
			}
		}
	}
	if(ans==10000010){
		cout<<-1;
	}else{
		cout<<ans;
	}
	return 0;
}

