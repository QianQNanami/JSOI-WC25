#include <bits/stdc++.h>
using namespace std;
const int N = 5e4;
int vis[N + 5],ans,a[N + 5],n;
signed main(){
	freopen ("kangaroo.in","r",stdin);
	freopen ("kangaroo.out","w",stdout);
	cin >> n;
	for (int i = 1;i <= n;i ++) cin >> a[i];
	sort (a + 1,a + 1 + n);
	for (int i = 1;i <= n / 2;i ++){
		int x = 2 * a[i];
		for (int j = n / 2;j <= n;j ++){
			if (a[j] >= x && !vis[j]){
				vis[j] = 1;
			//	cout << a[i] << " " << j << endl;
				ans ++;
				break;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
/*
8  2 5 7 6 9 8 4 2
2 2 4 5 || 6 7 8 9
*/
