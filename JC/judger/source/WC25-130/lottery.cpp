#include <bits/stdc++.h>
using namespace std;
bool is_prime(int x){
	if (x == 0 || x == 1) return 0;
	for (int i = 2; i * i <= x; i++){
		if (x % i == 0) return 0;
	}
	return 1;
}
int main(){
	int m, n;
	cin >> m >> n;
	int cnt = 0;
	for (int i = m; i <= n; i++){
		if (is_prime(i)) cnt++;
	}
	cout << cnt;
	return 0;
}
