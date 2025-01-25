#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAXN=5e4+50;
int n,a[MAXN],sum[MAXN],mid;
bool check(int x){
	for(int i=x+1;i<=n;i++){
		if(a[i]>=a[x]*2){
			return true;
		}
	}
	return false;
}
signed main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		if(!check(i)){
			mid=i;
			break;
		}
	}
	if(mid-1<=n-mid+1){
		cout<<mid-1;
	}
	else{
		cout<<n-mid+1;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
