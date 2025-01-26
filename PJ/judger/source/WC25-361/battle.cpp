#include<bits/stdc++.h>
using namespace std;

int n,m,num=1,xx,yy,dx,dy;

char c[310][310];
int a[310][310];//存转换后的数字地图  INT_MAX代表不能通行  1代表通过要1秒 2代表通过要两秒 
int b[310];//存每一条路的步数 
int fx[5]={0,1,0,-1,0};
int fy[5]={0,0,1,0,-1};

void dfs(int x,int y,int z){//z代表步数 
    cout<<x<<" "<<y<<" "<<z<<endl;

	if(x==dx&&y==dy){
		cout<<z<<endl;
		b[num]=z;
		num++; 
		return;
	}
	
	if(a[x][y]>=INT_MAX){
		cout<<"11111111111111"<<endl;
		return;
	}
	
	for(int i=1;i<=4;i++){
		dfs(x+fx[i],y+fy[i],z+a[x+fx[i]][y+fy[i]]);
		
		
	}
}
int main(){
    
    cin>>n>>m;
    
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		cin>>c[i][j];
    		if(c[i][j]=='E') a[i][j]=1;
    		
    		else if(c[i][j]=='B') a[i][j]=2;
    		
    		else if(c[i][j]=='R' || c[i][j]=='S') a[i][j]=INT_MAX;
    		
    		else if(c[i][j]=='T') {a[i][j]=INT_MAX;dx=i;dy=j;}
    		
    		else {a[i][j]=INT_MAX-1;xx=i;yy=j; }
		}
	}
	
	for(int i=0;i<=n+1;i++){
		a[0][i]=INT_MAX;
		a[n+1][i]=INT_MAX;
	}
	for(int i=0;i<=m+1;i++){
		a[i][0]=INT_MAX;
		a[i][m+1]=INT_MAX;
	}
	
	dfs(xx,yy,0);
	
	for(int i=2;i<=num;i++){
		if(b[i]<b[1]){
			b[1]=b[i];
		}
	}
	
	cout<<b[1];
    
	return 0;
}


