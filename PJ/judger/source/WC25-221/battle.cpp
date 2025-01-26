#include <bits/stdc++.h>
#define MAXN 310
#define MAXM 100000
using namespace std;
int m,n,xs,ys;
int mint=MAXM;
int dx[5]={0,-1,1,0,0},dy[5]={0,0,0,-1,1};
bool vis[MAXN][MAXN],sc=0;
char btl[MAXN][MAXN];
struct point{
	int x,y,t;
};
void search(int x,int y,int t)
{
    queue<point>q;
    q.push({x,y,t});
    while(!q.empty()){
    	point fp=q.front();
    	q.pop();
    	for(int i=1;i<=4;++i){
    		point np=fp;
    		np.x+=dx[i];
    		np.y+=dy[i];   
    		if(btl[np.x][np.y]=='T'){
	            mint=np.t<mint?np.t:mint;
				sc=1;
			}
    		else if(np.x>0&&np.y>0&&np.x<=m&&np.y<=n&&vis[np.x][np.y]==0&&(btl[np.x][np.y]=='E'||btl[np.x][np.y]=='B')){
    			++np.t;
    		    if(btl[np.x][np.y]=='B')
    		        ++np.t; 
    		    q.push(np);
			}
		}
	}
}
int main()
{
	cin>>m>>n;
	for(int i=1;i<=m;++i){
	    string s;
	    getline(cin,s);
	    for(int j=1;j<=n;++j)
	        btl[i][j]=s[j-1];
    }
    for(int i=1;i<=m;++i)
	    for(int j=1;j<=n;++j)
	        if(btl[i][j]=='Y'){
	        	xs=i; ys=j;
			}
    //search(xs,ys,0);
    //if(sc) cout<<mint;
    /*else */cout<<-1;
	return 0;
}
