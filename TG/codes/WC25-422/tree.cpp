#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
vector <int>g[100002];
int n,ans=0;
int f[100002],fp[100002];

void dfsf(int s){
	for(int i=0;i<g[s].size();++i){
		dfsf(g[s][i]);
		f[s]+=f[i];
	}
	return ;
}

int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>n;
	int fa[n+1],w[n+1];
	for(int i=0;i<n;++i){
		cin>>w[i]>>fa[i];
		f[i]=w[i];
		g[fa[i]].push_back(i);
	}
	dfsf(1);
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j){
			if(i==j)continue;
			if(f[i]==f[j]&&
				f[i]==f[1]-f[j]-f[i])++ans;
		}
	cout<<ans<<'\n';
	return 0;
} 
