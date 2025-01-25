#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+9;
struct node{
	int psum;
	int sum;
	int parent;
	int val;
}tree[maxn];
int n;
int fa[maxn];
void add(int nd,int valu){
	node T=tree[nd];	
	tree[tree[nd].parent].sum+=valu;
	if(T.parent==0){
		return ;
	}
	add(tree[nd].parent,valu);
	return ;
}
void psuum(int s){
	tree[s].psum=tree[tree[s].parent].sum;
}
bool find_parent(int p,int k){
	if(fa[k]==0) return false;
	if(p==fa[k]) return true;
	if(p!=fa[k]) find_parent(p,fa[k]);
}
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		cin>>tree[i].val>>tree[i].parent;
		fa[i]=tree[i].parent;
		sum+=tree[i].val;
		tree[i].sum=tree[i].val;
		add(i,tree[i].val);
	}
	for(int i=1;i<=n;i++){
		psuum(i);
	}
	int ans=0;
	for(int i=1;i<=n-1;i++){
		for(int j=i+1;j<=n;j++){
			if(sum==tree[j].sum*3&&(sum==tree[j].sum+tree[i].sum&&find_parent(i,j))||(tree[j].sum==tree[i].sum&&tree[i].sum*3==sum)){
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
} 
