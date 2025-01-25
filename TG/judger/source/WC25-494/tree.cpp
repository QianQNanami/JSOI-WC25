#include <bits/stdc++.h>
using namespace std;
vector<int> E[100005];
long long ans, h[100005];
int s[100005], w[100005], root, n;
void dfs1(int x){
	s[x]=w[x];
	for(int i=0; i<E[x].size(); i++){
		dfs1(E[x][i]);
		s[x]+=s[E[x][i]];
	}
}
void dfs2(int x){
	for(int i=0; i<E[x].size(); i++){
		dfs2(E[x][i]);
		ans+=h[E[x][i]]*h[x];
		h[x]+=h[E[x][i]];
	}
	if(s[root]/3*2==s[x]){
		ans+=h[x];
	}else if(s[root]/3==s[x]){
		h[x]++;
	}
}
int main(){
	scanf("%d", &n); int val, u;
	for(int i=1; i<=n; i++){
		scanf("%d%d", &val, &u);
		w[i]=val;
		if(u){E[u].push_back(i);}
		else{root=i;}
	}
	dfs1(root);
	if(s[root]%3){
		printf("0");
	}else if(!s[root]){
		long long cnt=0;
		for(int i=1; i<=n; i++){
			if((i!=root)&&(!s[i])){
				cnt++;
			}
		}
		printf("%lld", cnt*(cnt-1)/2);
	}else{
		dfs2(root); printf("%lld", ans);
	}
	return 0;
}

