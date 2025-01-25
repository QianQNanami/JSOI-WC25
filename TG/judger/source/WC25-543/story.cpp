#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,k,tag;
int a[50005];
int vis[35],ans;
bool f=false;
bool check(int tmp){
	memset(vis,0,sizeof(vis));
	int flag=0;
	for(int i=1;i<=tmp;i++){
		vis[a[i]]++;
		flag|=(1<<(a[i]-1));
	}
	if(flag==tag)return true;
	for(int i=2;i+tmp-1<=n;i++){
		vis[a[i-1]]--;
		vis[a[i+tmp-1]]++;
		if(vis[a[i-1]]==0)flag&=(~(1<<(a[i-1]-1)));
		flag|=(1<<(a[i+tmp-1]-1));
		if(flag==tag)return true;
	}
	return false;
}
int op,x,d;
signed main(){
	freopen("story.in","r",stdin);
	freopen("story.out","w",stdout);
	ios::sync_with_stdio(0);
	cin>>n>>k>>m;
	for(int i=0;i<k;i++){
		tag|=(1<<i);
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		cin>>op;
		if(op==1){
			cin>>x>>d;
			a[x]=d;
			f=false;
		}
		else{
			if(f){
				cout<<ans<<endl;	
			}
			else{
				int l=k,r=n;
				while(l<r){
					int mid=(l+r)/2;
					if(check(mid))r=mid;
					else l=mid+1;
				}
				if(check(l))ans=l;
				else ans=-1;
			}
			cout<<ans<<endl;
			f=true;
		}
	}
	return 0;
}
//4 3 5
//2 3 1 2
//2
//1 3 3
//2
//1 1 1
//2
//6 3 4
//1 2 3 2 1 1
//1 2 1
//1 4 1
//1 6 2
//2
