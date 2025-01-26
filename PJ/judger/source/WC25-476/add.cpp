#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5;
int a[N + 5],s[N + 5],n,m,l,r;
signed main(){
	cin >> n;
	for(int i = 1;i <= n;i++)
		cin >> a[i];
	for(int i = 1;i <= n;i++)
		s[i] = s[i - 1] + a[i];
	/*for(int i = 1;i <= n;i++)
		cout << s[i] << ' ';*/
	cin >> m;
	while(m--){
		cin >> l >> r;
		cout << s[r] - s[l - 1] << endl;
	}
	return 0;
}
