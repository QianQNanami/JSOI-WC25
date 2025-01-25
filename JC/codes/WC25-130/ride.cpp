#include <bits/stdc++.h>
using namespace std;
int main(){
	string a, b;
	cin >> a >> b;
	long long ansa, ansb;
	ansa = ansb = 1;
	for (int i = 0; a[i] != '\n'; i++){
		ansa *= a[i] - 'A' + 1;
	}
	for (int i = 0; b[i] != '\n'; i++){
		ansa *= b[i] - 'A' + 1;
	}
	ansa = ansa % 47;
	ansb = ansb % 47;
	if (ansa == ansb)
	cout << "GO";
	else cout << "STAY";
	return 0;
}
