#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
int a[50005];
bool vis[50005];
int ans;
signed main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	a[n+1]=INT_MAX;
	int cnt=1;
	for(int i=1;i<=n;i++){
		if(vis[i])continue;
		int inx=lower_bound(a+cnt+1,a+n+2,a[i]*2)-a;
		if(a[inx]!=INT_MAX){
			vis[inx]=true;
			ans++;
			cnt=inx;
		}
		else{
			break;
		}
	}
	cout<<ans;
	return 0;
}

