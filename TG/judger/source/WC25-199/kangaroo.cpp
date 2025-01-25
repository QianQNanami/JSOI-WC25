#include <bits/stdc++.h>
using namespace std;
int n,a[50005],ans=0,r,l=-1,flag=0,vis[50005];
bool cmp(int x,int y){
	return x<y;
}
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n,cmp);
	r=n;
	for(int i=n;i>=1;i--){
		if(l==0) break;
		if(flag==0&&a[i]*2<=a[r]){
			flag=1;
			l=i-1;
			ans++;
			r--;
			vis[l+1]=1;
		}
		else if(flag==1&&vis[r]==0&&a[l]*2<=a[r]){
			l--;
			ans++;
			r--;
			vis[l+1]=1;
		}
		else if(flag==1&&vis[r]==0&&a[l]*2>a[r]){
			l--;
		}
	}
	cout<<ans;
	return 0;
}
