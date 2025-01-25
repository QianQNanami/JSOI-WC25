#include<bits/stdc++.h>
using namespace std;
int n,a[100005],rt,v[100005],tmp;
map<pair<int,int>,int> c;
vector<int> t[100005];
void dfs(int x){
	for(int i=0;i<t[x].size();i++){
		dfs(t[x][i]);
		a[x]+=a[t[x][i]];
	}
}
void dfs1(int x,int f){
	if(a[f]-a[x]==a[x]&&a[x]==a[rt]-a[f]&&c[make_pair(x,f)]==0&&c[make_pair(f,x)]==0){
		tmp++;
		c[make_pair(x,f)]=1;
		c[make_pair(f,x)]=1;
	}
	for(int i=0;i<t[x].size();i++){
		dfs1(t[x][i],f);
	}
}
void dfs2(int x,int f){
	if(a[rt]-a[f]-a[x]==a[x]&&a[x]==a[f]&&c[make_pair(x,f)]==0&&c[make_pair(f,x)]==0){
		tmp++;
		c[make_pair(x,f)]=1;
		c[make_pair(f,x)]=1;
	}
	for(int i=0;i<t[x].size();i++){
		if(!v[t[x][i]]){
			dfs2(t[x][i],f);
		}
	}
}
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		int x,y;
		cin>>x>>y;
		if(y==0){
			rt=i;
		}
		else{
			t[y].push_back(i);
		}
		a[i]=x;
	}
	dfs(rt);
	for(int i=1;i<=n;i++){
		if(i!=rt){
			dfs1(i,i);
			//cout<<tmp<<" ";
		}
	}
	
	for(int i=1;i<=n;i++){
		if(i!=rt){
			v[i]=1;
			dfs2(rt,i);
			v[i]=0;
		}
	}
	cout<<tmp;
	return 0;
}

