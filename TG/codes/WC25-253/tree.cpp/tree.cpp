#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int a[N],fa[N],in[N];
queue<int>q;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d%d",&a[i],&fa[i]);
		in[fa[i]]++;
	}
	for(int i=1;i<=n;i++)if(!in[i])q.push(i);
	while(!q.empty()){
		int x=q.front();
		q.pop();
		a[fa[x]]+=a[x];
		in[fa[x]]--;
		if(!in[fa[x]])q.push(fa[x]);
	}
	for(int i=1;i<=n;i++)printf("%d",a[i]);
}
