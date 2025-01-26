#include<bits/stdc++.h>
using namespace std;
int n,m;
int step=INT_MAX;
int sx,sy,ex,ey;
char a[310][310];
bool b[310][310];
int tx[5]={0,1,0,-1,0};
int ty[5]={0,0,1,0,-1};
void dfs(int x,int y,int deep){
//cout<<x<<' '<<y<<' '<<deep<<endl;
		for(int i=1;i<=4;i++){	
		int fx=x+tx[i];
			int fy=y+ty[i];		
            if(a[fx][fy]=='T'){
		      step=min(deep+1,step);
			}
			if(fx>=1&&fx<=n&&fy>=1&&fy<=m){
			if(a[fx][fy]=='B'&&b[fx][fy]==0){
				b[fx][fy]=1;
				dfs(fx,fy,deep+2);
				b[fx][fy]=0;
			}
			else if(a[fx][fy]=='E'&&b[fx][fy]==0){
				b[fx][fy]=1;
				dfs(fx,fy,deep+1);
				b[fx][fy]=0;
			}
		
		      }
	}
}
int main(){
cin>>n>>m;
for(int i=1;i<=n;i++){
	for(int j=1;j<=m;j++){
		cin>>a[i][j];
		if(a[i][j]=='Y'){
			sx=i;
			sy=j;
	}	
	}
}
dfs(sx,sy,0);
if(step==INT_MAX){
	cout<<-1;
}
else{
	cout<<step;
}
return 0;
}

