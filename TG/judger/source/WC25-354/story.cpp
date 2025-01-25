#include<bits/stdc++.h>
using namespace std;
struct st{
	int dat,l,r;
}a[200005];
struct adj{
	int l,r;
}p[50005];
int e[50005]; 
int cnt,qwq;
bool cmp(adj q,adj w){
	 return q.l<w.l;
}
int n,m,k;
void build(int o,int l,int r){
	cnt=max(cnt,o);
	a[o].l=l;a[o].r=r;
	if (l==r) a[o].dat=e[l];
	if (l==r) return ;
	int mid=(l+r)/2;
	build(o*2,l,mid);
	build(o*2+1,mid+1,r);
	a[o].dat=max(a[o*2].dat,a[o*2+1].dat);
	return ;
}
void change(int o,int x,int c){
	if (a[o].l==a[o].r) {a[o].dat=c;return ;}
	int mid=(a[o].l+a[o].r)/2;
	if (x<=mid) change(o*2,x,c);
	if (x>mid) change(o*2+1,x,c);
	a[o].dat=max(a[o*2].dat,a[o*2+1].dat);
	return ;
}
bool gbc(int o){
	if (o>cnt) return false;
	if (a[o].dat<=k) return true;
	int x1=gbc(2*o);
	int x2=gbc(2*o+1);
	if (x1){
		p[++qwq].l=a[o*2].l;
		p[++qwq].r=a[o*2].r;
	} 
	if (x2){
		p[++qwq].l=a[o*2+1].l;
		p[++qwq].r=a[o*2+1].r;
	} 
	return false;
}
int main(){
//	freopen(".in","r",stdin);
//	freopen(".out","w",stdout);
	cin>>n>>k>>m;
	for (int i=1;i<=n;i++){
		cin>>e[i];
	}
	build(1,1,n);
	for (int o=1;o<=cnt;o++){
		if (a[o].l==0) continue;
		cout<<a[o].l<<' '<<a[o].r<<' '<<a[o].dat<<endl;
	}
	while(m--){
		qwq=0;
		int a1,b,c;
		cin>>a1;
		if (a1==1){
			cin>>b>>c;
			change(1,b,c);
			cout<<endl;
			for (int o=1;o<=cnt;o++){
				if (a[o].l==0) continue;
				cout<<a[o].l<<' '<<a[o].r<<' '<<a[o].dat<<endl;
			}
		}else{
			gbc(1);
			sort(p+1,p+qwq+1,cmp);
			int u=0;
			for(int i=1;i<=qwq;i++){
				if (i!=qwq&&p[i].r==p[i+1].l-1){
					p[i+1].l=p[i].l;
				}else{
					u=max(u,p[i].r-p[i].l+1);
				}
			}
			cout<<u<<endl;
		}
	}
	return 0;
}

