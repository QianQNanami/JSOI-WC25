#include <bits/stdc++.h>
using namespace std;

int f(int a){
	for (int i = 2; i <= a / 2; i++){
		if (a % i == 0){
			return 0;
		}
	}
	return 1;
}
int main(){
	
	int m, n;
	cin >> m >> n;
	int sum = 0;
	for (int i = m; i <= n; i++){
		if (f(i) == 1 && i >= 2){
			sum++;
		}
	}
	
	cout << sum << endl;
	
	return 0;
}
