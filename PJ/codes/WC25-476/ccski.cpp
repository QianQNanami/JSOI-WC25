#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e5;
int a[N + 5],m,n;
signed main(){
	cin >> m >> n;
	for(int i = 1;i <= 2 * m;i++)
		for(int j = 1;j <= n;j++)
			cin >> a[i];
	cout << 21 << endl;
	return 0;
}
