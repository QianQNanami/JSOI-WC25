#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[100005],fa[100005],ans,g;
vector<int> v[100005];
int find(int x){
	for(int i=0;i<v[x].size();i++){
		a[x]+=find(v[x][i]);
	}
	return a[x];
}
void ask(int x){
	if(a[x]==a[g]/3) {
		ans++;
		return ;
	}
	if(a[x]<a[g]/3) return ;
	for(int i=0;i<v[x].size();i++){
		ask(v[x][i]);
	}
}
signed main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>fa[i];
		if(!fa[i]) g=i;
		v[fa[i]].push_back(i);
	}
	find(g);
	for(int i=1;i<=n;i++){
		if(a[i]==a[g]/3*2) {
			ask(i);
		}
	}
	cout<<ans;
	return 0;
} 
