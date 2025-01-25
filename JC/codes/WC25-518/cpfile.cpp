#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[101], b[101];
signed main(){
	int n, i, j, s = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		for(j = i + 1; j <= n; j++){
			if(a[i] > a[j]){
				swap(a[i], a[j]);
			}
		}
	}
	for(int i = 2; i <= n; i++){
		for(j = 1; j < i; j++){
			b[i] = b[i] + a[j];
	}
		s = s + b[i];
	}
	cout << s << '\n';
	return 0;
}
