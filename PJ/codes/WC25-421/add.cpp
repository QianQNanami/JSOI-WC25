#include<bits/stdc++.h>
using namespace std;
int n;
int a[10005];
int m;
int l,r;
int sum[10005];
int main(){
	cin >> n;
	for (int i = 1;i <= n;i++){
		cin >> a[i];
	}
	cin >> m;
	for (int i = 1;i <= m;i++){
		cin >> l >> r;
		for (int j = l;j <= r;j++){
			sum[i] += a[j];
		}
	}
	for (int i = 1;i <= m;i++){
		cout << sum[i] << endl;
	}
	return 0;
}
