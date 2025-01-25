#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e4;
int n,ans,a[N + 5];
bool vis[N + 5];
signed main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i];
	}
	int flag,t;
	sort(a + 1,a + n + 1);
	for(int i = n;i >= 1;i--){
		t = i;
		if(a[i] * 2 <= a[n])
			break;
	}
	flag = min(n / 2,t + 1);
	for(int i = 1;i <= n;i++){
		if(vis[i] == true)
			continue;
		int l = flag,r = n;
		while(l < r){
			int mid = (l + r)>>1;
			if(a[mid] >= a[i] * 2){
				r = mid;
			}
			else{
				l = mid + 1;
			}
		}
		if(r == n && a[n] < a[i] * 2){
			cout << ans << endl;
			return 0;
		}
		flag = r + 1;
		vis[r] = true;
		ans++;
	}
	cout << ans << endl;
    return 0;
}
//2 2 4 5 6 7 8 9
