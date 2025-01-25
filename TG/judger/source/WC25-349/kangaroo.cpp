#include<bits/stdc++.h>
using namespace std;
int n,a[50005],ans,k,p;
bool vis[50005];
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	k=n;
	for(int i=n-1;i>=1;i--){
		if(a[i]<=a[k]/2){
			ans++;
			vis[i]=true;
			vis[k]=true;
			while(vis[k]){
				k--;
				if(i>=k) i--;
			}
		}
	}
	cout<<ans<<'\n';
	return 0;
}
