#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[1000005];
signed main(){
	int m, n, i, j, s = 0;
	cin >> m >> n;
	for(int i = m; i <= n; i++){
		for(int j = 2; j < i; j++){
			if(i % j == 0){
				a[i]++;
				break;
			}
		}
	}
	for(int i = m; i <= n; i++){
		if(a[i] == 0 && i != 1){
			s++;
		}
	}
	cout << s << '\n';
	return 0;
}
