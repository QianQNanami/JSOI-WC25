#include<bits/stdc++.h>
using namespace std;
int ans=-1;
void dfs(vector< vector<int> > &a,int x_in,int y_in,int x_to,int y_to,int time,int m,int n){
	if(!a[x_in][y_in]) return ;
	a[x_in][y_in]=0;
	if(x_in==x_to&&y_in==y_to){
		if(ans>0) ans=min(time,ans);
		else ans=time;
		return ;
	}
	if(a[x_in][y_in]==2) time+=1;
	if(x_in<m) dfs(a,x_in+1,y_in,x_to,y_to,time+1,m,n);
	if(x_in>1) dfs(a,x_in-1,y_in,x_to,y_to,time+1,m,n);
	if(y_in>1) dfs(a,x_in,y_in-1,x_to,y_to,time+1,m,n);
	if(y_in<n) dfs(a,x_in,y_in+1,x_to,y_to,time+1,m,n);
}
int main(){
	int m,n,x_in,y_in,x_to,y_to;
	cin>>m>>n;
	vector< vector<int> > a(m+1,vector<int>(n+1,0));
	for(int i=1;i<=m;i++){
		string s;
		cin>>s;
		for(int j=1;j<=n;j++){
			char c=(char)s[j-1];
			if(c==89){
				a[i][j]=1;
				x_in=i;
				y_in=j;
			}else if(c==84){
				a[i][j]=1;
				x_to=i;
				y_to=j;
			}else if(c==66) a[i][j]=2;
			else if(c==69) a[i][j]=1;
		}
	}
	dfs(a,x_in,y_in,x_to,y_to,0,m,n);
	cout<<ans;
	return 0;
}
/*
3 4
YBEB
EERE
SSTE

8
*/

