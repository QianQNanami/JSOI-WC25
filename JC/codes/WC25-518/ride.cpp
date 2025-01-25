#include<bits/stdc++.h>
using namespace std;
#define int long long
string s, c;
int t = 1, y = 1;
signed main(){
	int i;
	cin >> s >> c;
	for(i = 0; i < s.size(); i++){
		t = t * (s[i] - '@');
	}
	for(int i = 0; i < c.size(); i++){
		y = y * (c[i] - '@');
	}
	if(t % 47 == y % 47){
		cout << "GO" << '\n';
	}
	else{
		cout << "STAY" << '\n';
	}
	return 0;
}
