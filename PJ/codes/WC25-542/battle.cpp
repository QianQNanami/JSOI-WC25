#include<bits/stdc++.h>
using namespace std;
int n,m,x,y,a,b,cnt,cnt1,f,minn = 1e5*2+10;
char c[302][302];
bool flag[302][302];
int xx[10] = {1,0,-1,0};
int yy[10] = {0,1,0,-1};
void dfs(int i,int j){
    if(i==a&&j==b){
    	f = 1;
    	if(cnt<minn)minn = cnt;
    	//cout<<cnt<<endl;
		return;
	}
	if(c[i][j]=='B')cnt++;
	for(int k = 0;k<4;k++){
		int xn = xx[k]+i;
		int yn = yy[k]+j;
		if(xn>n||xn<=0||yn>m||yn<=0||flag[xn][yn]||c[xn][yn]=='R'||c[xn][yn]=='S'){
			continue;
		}
		cnt++;
		flag[xn][yn] = 1;
		//cout<<c[xn][yn]<<endl;
		dfs(xn,yn);
		flag[xn][yn] = 0;
        cnt--;
	}
	if(c[i][j]=='B')cnt--;
}
int main(){
	cin>>n>>m;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
			cin>>c[i][j];
			if(c[i][j]=='Y'){
				x = i;
				y = j;
			}
			if(c[i][j]=='T'){
				a = i;
				b = j;
			}
		}
	}
	flag[x][y] = 1;
	dfs(x,y);
	
	if(!f){
		cout<<-1;
		return 0;
	}
	cout<<minn<<endl;
	
	return 0;
}
