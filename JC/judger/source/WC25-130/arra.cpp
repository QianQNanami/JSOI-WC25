#include <bits/stdc++.h>
using namespace std;
int m, k, cnt;
int cut(int x){
	int ans = x - k;
	if (ans / 2 > 0 && ans % 2 == 0){
		cut (ans / 2);
		cut (ans / 2 + k);
	}
	else{
		cnt ++;
	}
	return cnt;
}
int main(){
	cin >> m >> k;
	cout << cut(m);
	return 0;
}
