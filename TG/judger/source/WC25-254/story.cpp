#include<bits/stdc++.h>
using namespace std;
int n,k,m,a[50002],op,p,v,ans,cnt;
long long base;
struct segment_tree{
	int l=0,r=1e9,val,left,right,leftl,rightl;
}st[200002];
void build_tree(int cur,int l,int r){
	cnt=max(cur,cnt);
	st[cur].l=l;
	st[cur].r=r;
	if(l==r){
		st[cur].val=(1<<(a[l]-1));
		cout<<l<<" "<<r<<" "<<st[cur].val<<endl;
		return;
	}
	int mid=(l+r)/2;
	build_tree(cur*2,l,mid);
	build_tree(cur*2+1,mid+1,r);
	st[cur].val=(st[cur*2].val|st[cur*2+1].val);
	cout<<l<<" "<<r<<" "<<st[cur].val<<endl;
}
bool query(int cur){
	return st[cur].val==base;
}
void find(int cur){
	if(!query(cur))return;
	ans=min(ans,(st[cur].r-st[cur].l+1));
	if(cur*2<=cnt)find(cur*2);
	if(cur*2+1<=cnt)find(cur*2+1);
}
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	base=(1<<k)-1;
	for(int i=1;i<=n;i++)cin>>a[i];
	build_tree(1,1,n);
	for(int i=1;i<=m;i++){
		cin>>op;
		if(op==1){
			cin>>p>>v;
			a[p]=v;
			build_tree(1,1,n);
		}
		else{
			ans=1e9;
			find(1);
			cout<<ans<<endl;
		}
	}
}
