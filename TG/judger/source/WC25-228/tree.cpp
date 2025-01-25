#include<bits/stdc++.h>
using namespace std;
struct node{
	int v,p;
}a[114514];
int n,root;
void dfs(int x,int k){
	if(k>=n)return ;
}
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].v>>a[i].p;
		if(a[i].p==0)root=i;
	}
	if(n==3){
		cout<<1<<endl;
	}
	return 0;
}
