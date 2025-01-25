#include <bits/stdc++.h>
using namespace std;

const int N=50010;
int n,m,k,a[N];

inline int read(){
	int s=0;
	bool f=0;
	char c=getchar();
	while(!isdigit(c)){
		if(c=='-')f^=1;
		c=getchar();
	}
	while(isdigit(c)){
		s=(s<<1)+(s<<3)+(c^48);
		c=getchar();
	}
	return f==0?s:-s;
}

struct Tree{
	int lvh[31],rvh[31],ans;
}tree[4*N];

inline int lc(int x){return x<<1;}
inline int rc(int x){return lc(x)|1;}

void build(int p,int l,int r){
	if(l==r){
		for(int i=1;i<=k;++i)
			tree[p].lvh[i]=2*N,tree[p].rvh[i]=-2*N;
		tree[p].lvh[a[l]]=tree[p].rvh[a[l]]=l;
		tree[p].ans=2*N;
		return;
	}
	int mid=(l+r)/2;
	build(lc(p),l,mid);
	build(rc(p),mid+1,r);
	for(int i=1;i<=k;++i)
		tree[p].lvh[i]=min(tree[lc(p)].lvh[i],tree[rc(p)].lvh[i]),
		tree[p].rvh[i]=max(tree[lc(p)].rvh[i],tree[rc(p)].rvh[i]);
	tree[p].ans=min(tree[lc(p)].ans,tree[rc(p)].ans);
	for(int i=1;i<=k;++i){
		int L=tree[lc(p)].rvh[i];
		int R=INT_MIN;
		for(int j=1;j<=k;++j)
			if(tree[lc(p)].rvh[j]<L)R=max(R,tree[rc(p)].lvh[j]);
		if(R>0)tree[p].ans=min(tree[p].ans,R-L+1);
	}
}

void update(int p,int l,int r,int x,int kk){
	if(l==r){
		a[x]=kk;
	//	cout<<"@"<<kk<<endl;
		for(int i=1;i<=k;++i)
			tree[p].lvh[i]=2*N,tree[p].rvh[i]=-2*N;
		tree[p].lvh[a[l]]=tree[p].rvh[a[l]]=l;
		tree[p].ans=2*N;
		return;
	}
	int mid=(l+r)/2;
	if(x<=mid)update(lc(p),l,mid,x,kk);
	else update(rc(p),mid+1,r,x,kk);
	tree[p].ans=min(tree[lc(p)].ans,tree[rc(p)].ans);
	for(int i=1;i<=k;++i)
		tree[p].lvh[i]=min(tree[lc(p)].lvh[i],tree[rc(p)].lvh[i]),
		tree[p].rvh[i]=max(tree[lc(p)].rvh[i],tree[rc(p)].rvh[i]);
//	if(l==1&&r==2)
//		for(int i=1;i<=k;++i)
//			cout<<"87:"<<tree[p].lvh[i]<<" "<<tree[p].rvh[i]<<endl;
	for(int i=1;i<=k;++i){
		int L=tree[lc(p)].rvh[i],R=INT_MIN;
		for(int j=1;j<=k;++j){
//			if(l==1&&r==4)cout<<"88:"<<j<<" "<<tree[rc(p)].lvh[j]<<" "<<tree[lc(p)].rvh[j]<<" "<<L<<" "<<R<<endl;
			if(tree[lc(p)].rvh[j]<L)R=max(R,tree[rc(p)].lvh[j]);
		}
		if(R>0)tree[p].ans=min(tree[p].ans,R-L+1);
	}
//	cout<<"!"<<l<<" "<<r<<" "<<tree[p].ans<<endl;
}

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	n=read(),k=read(),m=read();
	for(int i=1;i<=n;++i)
		a[i]=read();
	build(1,1,n);
	while(m--){
		int op=read();
		if(op==1){
			int p=read(),v=read();
			update(1,1,n,p,v);
		}
		else cout<<(tree[1].ans>n?-1:tree[1].ans)<<"\n";
	}
	cout.flush();
	fclose(stdin);
	fclose(stdout);
	return 0;
}

