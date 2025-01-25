#include<bits/stdc++.h>
using namespace std;
int a[50005];
bool w[50005];
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	a[0]=INT_MAX;
	int ans=0;
	for (int i=n;i>=1;i--){
		if (w[i]) break;
		w[i]=true;
		int l=0,r=n;
		while (l<=r){
			int mid=(l+r)/2;
			if (w[mid]){
				r=mid-1;
			}else if (a[mid]<=a[i]/2){
				l=mid+1;
			}else{
				r=mid-1;
			}
		}
		w[l-1]=true;
		if (r<=0) break;
		else ans++;
	}
	cout<<ans;
	return 0;
}

