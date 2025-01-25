#include<bits/stdc++.h>
using namespace std;
int n,l=1,r,ans;
int a[50004];
bool p[50004];
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	scanf("%d",&n);
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	sort(a+1,a+n+1);
	for (l=n,r=n;l>=1 && r>=1;r--){
		if (!p[r]){
			while (l > 1 && a[l] > a[r]/2){
				l--;
			}
			if (a[l] <= a[r]/2){
				ans++;
				p[r]=1;
				p[l]=1;
				//printf("%d %d\n",a[l],a[r]);
				l--;
			}
			if (l < 1){
				break;
			}
		}
	}
	printf("%d\n",ans);
	return 0;
}
