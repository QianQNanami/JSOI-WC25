#include <stdio.h>
#include <vector>
using namespace std;

const int N=1e5+8;

vector<int> G[N];

inline void add(int u,int v) {
	G[u].push_back(v);
}

int value[N]={};
int n,sum,ret=0;

void dfs(int s,int& ans,int leave) {
	ans += value[s];
	for(int i=0;i<G[s].size();++i) {
		if(G[s][i] != leave) dfs(G[s][i],ans,leave);
	}
}

int main() {
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		int v;
		scanf("%d%d",value+i,&v);
		if(v) add(v,i);
		sum += value[i];
	}
	if(sum%3) {
		puts("0");
		return 0;
	}
	sum /= 3;
	for(int a=2;a<=n;a++) {
		for(int b=a+1;b<=n;b++) {
			int ans_a=0,ans_b=0;
			dfs(a,ans_a,b);
			dfs(b,ans_b,a);
			if(ans_a == ans_b && sum == ans_b)
				++ret;
		}
	}
	printf("%d",ret);
}

