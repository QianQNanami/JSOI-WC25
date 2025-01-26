#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 10;
int a[N],ans,l,w,area;
void sol(){
	ans = 0;
	ans += a[6];
	cout << ans << endl;
}
signed main(){
	do{
		cin >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6];
		if(a[1] or a[2] or a[3] or a[4] or a[5] or a[6])
			sol();
		else
			return 0;
	}
	while(a[1] or a[2]or a[3] or a[4] or a[5] or a[6]);
	return 0;
}
