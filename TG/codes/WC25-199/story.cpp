#include <bits/stdc++.h>
using namespace std;
struct ABC{
	int l,r,w;
};
ABC t[500005];
int n,k,m,a[50005],jud,p,v,ans=INT_MAX,cnt[50005],num=0,u;
void build(int ll,int rr,int x){
	t[x].l=ll;t[x].r=rr;
	if(ll==rr){
		t[x].w=(1<<a[ll]);
		return;
	}
	int mid=(ll+rr)/2;
	build(ll,mid,x*2);
	build(mid+1,rr,x*2+1);
	t[x].w=t[x*2].w|t[x*2+1].w;
}
void add(int x){
	if(t[x].l==t[x].r){
		t[x].w=(1<<v);
		return;
	}
	int mid=(t[x].l+t[x].r)/2;
	if(p<=mid) add(x*2);
	else add(x*2+1);
	t[x].w=t[x*2].w|t[x*2+1].w;
}
int tot(int x){
	long long y=pow(2,k+1);
	long long R=x+2;
	if(R==y) return 1;
	else return 0;
}
int l_dele(int x,int cek){
	if(!tot(cek)){
		if(t[x].r==t[x].l) return 0;
		cek=cek|t[x*2+1].w;
		u=u|t[x*2+1].w;
		return l_dele(x*2,cek);
	}
	else return t[x].r-t[x].l+1;
}
int r_dele(int x,int cek){
	if(!tot(cek)){
		if(t[x].r==t[x].l) return 0;
		cek=cek|t[x*2].w;
		return l_dele(x*2+1,cek);
	}
	else return t[x].r-t[x].l+1;
}
void fid(int x){
	if(t[x].l==t[x].r){
		return;
	}
	if(tot(t[x*2].w)) fid(x*2);
	if(tot(t[x*2+1].w)) fid(x*2+1);
	if(!tot(t[x*2].w)&&!tot(t[x*2+1].w)){
		u=0;
		int len1=l_dele(x*2,t[x*2+1].w);
		int len2=r_dele(x*2+1,u);
		ans=min(ans,t[x].r-t[x].l+1-len1-len2);
	}
}
int main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	cin>>n>>k>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	build(1,n,1);
	for(int i=1;i<=m;i++){
		cin>>jud;
		if(jud==1){
			cin>>p>>v;
			add(1);
		}
		else{
			num++;
			ans=INT_MAX;
			if(!tot(t[1].w)) cnt[num]=-1;
			else{
				fid(1);
				cnt[num]=ans;
			}
		}
	}
	for(int i=1;i<=num;i++){
		cout<<cnt[i];
		if(i!=num) cout<<endl;
	}
	return 0;
}
