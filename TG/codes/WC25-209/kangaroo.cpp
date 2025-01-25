#include <bits/stdc++.h>
using namespace std;
int n,ans;
int a[50005];	
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	int l=1,mid=n/2+1;
	while(l<=n/2&&mid<=n){
		if(a[l]<=a[mid]/2){
			ans++;
			l++;
			mid++;
		}else{
			mid++;
		}
	}
	cout<<ans<<endl;
	return 0;
}
