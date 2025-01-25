#include<bits/stdc++.h>
using namespace std;
long long a[50010],b[50010],n,ai,wei,ans;
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	scanf("%lld%lld",&n,&a[1]);
	for(long long i=2;i<=n;i++){
		scanf("%lld",&a[i]);
		for(long long j=i;j>1;j--){
			if(a[j-1]<a[j]){
				swap(a[j-1],a[j]);
			}
			else{
				break;
			}
		}
	}
	wei=1;
	b[wei]=a[1]/2;
	for(long long i=2;i<=n;i++){
		b[i]=a[i]/2;
		if(b[wei]!=0){
			if(b[wei]>=a[i]){
				ans++;
				wei++;
			}
		}
	}
	printf("%lld",ans);
	return 0;
}
