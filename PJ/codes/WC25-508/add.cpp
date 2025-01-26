#include<bits/stdc++.h>
using namespace std;

const int N = 10e5;
int n, m, l, r;
int a[N + 5], b[N + 5];

int main(){
	cin >> n;
	for(int i = 1;i <=n;i++){
		cin >> a[i];
	}
	b[1] = a[1];
	for(int i = 2;i <= n;i++){
		b[i] = b[i - 1] + a[i];
	}
	cin >> m;
	for(int i = 1;i <= m;i++){
		cin >> l >> r;
		cout << b[r] - b[l - 1] << "\n";
	}
	return 0;
}
