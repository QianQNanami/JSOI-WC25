#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string a, b;
	cin >> a >> b;
	int s1 = 1, s2 = 1;
	for (int i = 0; i < a.size(); i++){
		s1 *= a[i] - 64;
	}
	for (int i = 0; i < b.size(); i++){
		s2 *= b[i] - 64;
	}
	if (s1 % 47 == s2 % 47){
		cout << "GO" << endl;
	}else{
		cout << "STAY" << endl;
	}
	
	return 0;
}
