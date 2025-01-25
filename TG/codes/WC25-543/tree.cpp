#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,root,num,ans;
int hd[100005],tot;
struct node{
	int v,nxt;
}edge[100005];
void link(int u,int v){
	tot++;
	edge[tot].v=v;
	edge[tot].nxt=hd[u];
	hd[u]=tot;
}
int x[100005],y;
int d[100005];
void dfs(int u,int f){
	d[u]=x[u];
	for(int i=hd[u];i;i=edge[i].nxt){
		int v=edge[i].v;
		if(v!=f){
			dfs(v,u);
			d[u]+=d[v];	
		}
	}
}
int find(int u,int f,int QSQ){
	if(d[u]==num){
		ans+=QSQ;
		return 1;
	}
	int cnt=0,tmp=0,t=0;
	if(d[u]==num*2)QSQ++;
	for(int i=hd[u];i;i=edge[i].nxt){
		int v=edge[i].v;
		if(v!=f){
			int z=find(v,u,QSQ);
			cnt=cnt+z*z;
			tmp=tmp+z;
			t++;
		}
	}
	if(t>1){
		int zhi=(tmp*tmp-cnt)/2;
		ans+=zhi;
	}
	return tmp;
}
signed main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x[i]>>y;
		if(y==0){
			root=i;
			continue;
		}
		link(y,i);
	}
	dfs(root,0);
	if(d[root]%3!=0){
		cout<<0;
		return 0;
	}
	num=d[root]/3;
	find(root,0,0);
	cout<<ans;
	return 0;
}

