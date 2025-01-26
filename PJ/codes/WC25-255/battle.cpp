#include<bits/stdc++.h>
using namespace std;
char a[309][309];
bool vis[309][309];
queue<long long>q,p,k;
int main(){
	long long m,n,f=1;
	cin>>m>>n;
	for(long long i=0;i<=n+1;i++){
		a[0][i]='R';
	}
	for(long long i=m+1;i>=1;i--){
		a[i][n+1]='R';
	}
	for(long long i=1;i<=n;i++){
		a[m+1][i]='R';
	}
	for(long long i=1;i<=m+1;i++){
		a[i][0]='R';
	}
	for(long long i=1;i<=m;i++){
		for(long long j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(long long i=0;i<=m+1;i++){
		for(long long j=0;j<=n+1;j++){
			if(a[i][j]=='Y'){
			q.push(i);
			p.push(j);
			k.push(0);
			vis[i][j]=1;
			}
			if(a[i][j]=='R'||a[i][j]=='S')vis[i][j]=1;
		}
	}
	
	while(!q.empty()){
		long long x=q.front(),y=p.front(),z=k.front();
		q.pop();p.pop();k.pop();
			if(vis[x-1][y]!=1){
				if(a[x-1][y]=='E'){
					q.push(x-1);p.push(y);k.push(z+1);
					vis[x-1][y]=1;
				}
				if(a[x-1][y]=='B'){
					q.push(x-1);p.push(y);k.push(z+2);
					vis[x-1][y]=1;
				}
				if(a[x-1][y]=='T'){
					cout<<z+1;
					f=0;
					break;
				}
			}
			if(vis[x][y-1]!=1){
				if(a[x][y-1]=='E'){
					q.push(x);p.push(y-1);k.push(z+1);
					vis[x][y-1]=1;
				}
				if(a[x][y-1]=='B'){
					q.push(x);p.push(y-1);k.push(z+2);
					vis[x][y-1]=1;
				}
				if(a[x][y-1]=='T'){
					cout<<z+1;
					f=0;
					break;
				}
			}
			if(vis[x+1][y]!=1){
				if(a[x+1][y]=='E'){
					q.push(x+1);p.push(y);k.push(z+1);
					vis[x+1][y]=1;
				}
				if(a[x+1][y]=='B'){
					q.push(x+1);p.push(y);k.push(z+2);
					vis[x+1][y]=1;
				}
				if(a[x+1][y]=='T'){
					cout<<z+1;
					f=0;
					break;
				}
			}
			if(vis[x][y+1]!=1){
				if(a[x][y+1]=='E'){
					q.push(x);p.push(y+1);k.push(z+1);
					vis[x][y+1]=1;
				}
				if(a[x][y+1]=='B'){
					q.push(x);p.push(y+1);k.push(z+2);
					vis[x][y+1]=1;
				}
				if(a[x][y+1]=='T'){
					cout<<z+1;
					f=0;
					break;
				}
			}
	}
	if(f==1)cout<<-1;
	return 0;
}
