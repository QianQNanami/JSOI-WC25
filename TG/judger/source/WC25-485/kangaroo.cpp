#include<bits/stdc++.h>
using namespace std;
int a[105000],b[101000],n,ans,k,vis[105000];
int main() {
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
		b[i]=a[i];
		b[i]/=2;
	}
	sort(a+1,a+n+1);
	sort(b+1,b+n+1);
	for(int i=n;i>=1;i--){
		for(int j=n;j>=1;j--){
			if(a[i]<=b[j]&&!vis[i]&&!vis[j]){
					vis[i]=1;
					vis[j]=1;
					ans++;
					break;
			} 
		
		}
	}
	
//	int cnt=n,m;
//	while(cnt!=0) {
//		--cnt;
//		int l=n-cnt,r=cnt+1;
//		while(l<=r) {
//     		int mid=(l+r)/2;
//			if(a[mid]>=2*a[cnt]) {
//				m=mid;
//				r=mid-1;
//			} else if(a[mid]<2*a[cnt])l=mid+1;
//		}
//		if(!vis[m]) {
//			vis[m]=1;
//			ans++;
//			m=1e5;
//		}
//	}
	cout<<ans;
	return 0;
}
