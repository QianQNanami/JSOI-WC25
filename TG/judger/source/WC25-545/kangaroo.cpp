#include <bits/stdc++.h>
using namespace std;
const int MAXN=5e4+10;
int a[MAXN];
int id[MAXN];
int vis[MAXN];
int n;
bool check(int x){
	memset(vis,0,sizeof(vis));
	int cnt=0;
	 for(int i=1;i<=x;i++){
	 	int u=max(x,id[x]);
	 	while(vis[u]){
	 		u++;
		 }
		 if(u<=n){
		 	vis[u++];
		  	cnt++;
		 }
	 }
	 if(cnt==x) return true;
	 else return  false;
}
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	memset(id,-1,sizeof(id));
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int cnt=0;
	for(int i=1;i<=n;i++){
		int v=a[i]*2;
		id[i]=lower_bound(a+i+1,a+1+n,v)-a+1;
		if(id[i]!=n+2) cnt++;
	}
	int L=1,R=cnt;
	while(L<R){
		int mid=(L+R)>>1;
		if(check(mid)){
			L=(mid+R+1)>>1;
		}
		else{
			R=(L+mid+1)>>1;
		}
	}
	cout<<L<<endl;
	return 0;
}

