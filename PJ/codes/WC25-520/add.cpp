#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
long long n,m;
long long a[N],res[N];
signed main() {
	cin >> n;
	for(int i = 1; i <= n; i ++) {
		scanf("%d",&a[i]);
		res[i] = res[i - 1] + a[i];
	}
	cin >> m;
	while(m --) {
		int l,r;
		scanf("%d",&l);
		scanf("%d",&r);
		printf("%d\n",res[r] - res[l - 1]);
	}
	return 0;
}
