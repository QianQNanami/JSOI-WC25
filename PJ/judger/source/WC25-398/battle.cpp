#include<bits/stdc++.h>
using namespace std;
int a[1000][310],vis[1000][310];
char al;
int n,m,ans=10000000000;
void d(int x,int li,int lj){
	if(a[li][lj]==3){
		ans=min(ans,x);
		return;
	}
	    	li=li;lj=lj+1;
	    	if(li>0&&lj>0&&li<=n&&lj<=m&&vis[li][lj]!=1&&a[li][lj]!=0){
	    		vis[li][lj]=1;
	    		if(a[li][lj]==4)x++;
				d(x+1,li,lj);
	    		if(a[li][lj]==4)x--;
	    		vis[li][lj]=0;
			}
			li=li;lj=lj-1;
			li=li;lj=lj-1;
	    	if(li>0&&lj>0&&li<=n&&lj<=m&&vis[li][lj]!=1&&a[li][lj]!=0){
	    		vis[li][lj]=1;
	    		if(a[li][lj]==4)x++;
				d(x+1,li,lj);
	    		if(a[li][lj]==4)x--;
	    		vis[li][lj]=0;
			}
			li=li;lj=lj+1;
			li=li+1;lj=lj;
	    	if(li>0&&lj>0&&li<=n&&lj<=m&&vis[li][lj]!=1&&a[li][lj]!=0){
	    		vis[li][lj]=1;
	    		if(a[li][lj]==4)x++;
				d(x+1,li,lj);
	    		if(a[li][lj]==4)x--;
	    		vis[li][lj]=0;
			}
			li=li-1;lj=lj;
			li=li-1;lj=lj;
	    	if(li>0&&lj>0&&li<=n&&lj<=m&&vis[li][lj]!=1&&a[li][lj]!=0){
	    		vis[li][lj]=1;
	    		if(a[li][lj]==4)x++;
				d(x+1,li,lj);
	    		if(a[li][lj]==4)x--;
	    		vis[li][lj]=0;
			}
			li=li+1;lj=lj;
	}
int main(){
	cin>>n>>m; 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>al;
			if(al=='Y')a[i][j]=2;
			else if(al=='T')a[i][j]=3;
			else if(al=='S'||al=='R')a[i][j]=0;
			else if(al=='B')a[i][j]=4;
			else a[i][j]=5;
			cout<<a[i][j]<<" "; 
		}
		cout<<endl;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]==2){
			d(0,i,j);	
			break;
			}
		}
	}
	cout<<ans;
	return 0;
}/*
3 4
YBEB
EERE
SSTE
*/
