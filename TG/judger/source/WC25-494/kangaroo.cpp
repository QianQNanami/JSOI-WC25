#include <bits/stdc++.h>
using namespace std;
int a[50005], n;
int bound(int x){
	if(x>a[n]){return 0;}
	else{
		int l=1, r=n, mid;
		while(l<r){
			mid=(l+r)/2;
			if(a[mid]>=x){r=mid;}
			else{
				l=mid+1;
			}
		}
		return l;
	}
}
int main(){
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	sort(a+1, a+n+1); int tot=0, cnt=0;
	for(int i=1; i<=n/2; i++){
		int k=bound(2*a[i]);
		if(!k){break;}
		else if(k<=tot){
			tot++; cnt++;
		}else{
			tot=k; cnt++;
		}
		if(tot==n){break;}
	}
	printf("%d", cnt);
	return 0;
}

