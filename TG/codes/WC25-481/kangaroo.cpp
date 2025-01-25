#include<bits/stdc++.h>
using namespace std;
const int N = 5e4;
int n;
int a[N + 5];
int ans;
bool vis[N + 5];
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++)
	    cin >> a[i];
	sort(a + 1,a + 1 + n);
	for(int i = 1;i <= n;i++){
		if(vis[i])
			continue;
		int tofind = a[i] * 2;
		int found = lower_bound(a + 1,a + 1 + n,tofind) - a;
		while(found <= n && vis[found])
		    found++;
		if(found ==  n + 1)
		    break;
		vis[found] = true;
		vis[i] = true;
		ans++;
	}
	cout << ans << endl;
	return 0;
}/*


8
2 5 7 6 9 8 4 2


*/
