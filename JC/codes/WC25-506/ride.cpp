#include<bits/stdc++.h>
using namespace std;
string a, b;
int t = 1, n = 1;
int main(){
	int i;
	cin >> a >> b;
	for(i = 0; i < a.size();i++){
		t *= (a[i] - '@');
	}
	for(i = 0; i<b.size(); i++){
		n *= (b[i]-'@');
	}
	if( t % 47 == n % 47) cout << "GO" << endl;
	else cout << "STAY" << endl;
	return 0;
}
