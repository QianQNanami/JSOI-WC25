#include <bits/stdc++.h>
using namespace std;
const int N = 5e4 + 5;
int n, x;
long long a[N];
int ans = 0;
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	scanf("%d", &n);
	for(int i = 1; i <= n; ++i){
		scanf("%lld", &a[i]);
	}
	sort(a + 1, a + n + 1, greater<int>());
	for(int i = 1; i <= n; ++i){
		if(a[i] <= a[1] / 2){
			x=i;
			break;
		}
	}
	for(int i = 1; i <= x; ++i){
		if(a[x + i - 1] <= 1.0 / 2 * a[i] && a[x + i - 1] && a [x]) ++ans;
	}
	printf("%d\n", ans);
	fclose(stdin);
	fclose(stdout);
	return 0;
}

