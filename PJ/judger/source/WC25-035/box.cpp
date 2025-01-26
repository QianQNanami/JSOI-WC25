#include <bits/stdc++.h>
using namespace std;
const int N = 7e4 + 5;  
int a[N][10];
int main() {
	int cnt = 0;
	int len=1;
	for(int i = 1;; i++) {
		for(int j = 1; j <= 6; j++) {
			cin >> a[i][j];
			if(a[i][j] == 0) {
				cnt++;
			}
		}
//		cout<<"cnt   "<<cnt<<endl;
//		cout<<"len   "<<len<<endl;
		if (cnt == 6) {
			break;
		}
		cnt = 0;
		len ++;
	}
	int h = 2;
	long long ans = 0;
	for (int i = 1;i <= len - 1;i++) {
		for (int j = 1;j <= 6; j++) {
			ans += h * j * j * a[i][j];
		}
		ans = (int)ceil(1.0 * ans / 72);
		cout << ans << endl;
		ans = 0;
	}
	return 0;
}
