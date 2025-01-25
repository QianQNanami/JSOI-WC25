#include <bits/stdc++.h>
using namespace std;
int sum = 0, c, n;
int f(int a, int b){
	int m = 0;
	for (int i = 1; i <= a; i++){
		for (int j = 1; j <= a; j++){
			if (i + b == j && i + j == a){
				if (m == 1){
					break;
				}
				c = i;
				n = j;
				m++;
			}
		}
		if (m == 1){
			break;
		}
	}
	
	if (m == 1){
		f(c, b);
		f(n, b);
	}else{
		sum++;
	}
}
int main(){
	
	int a, b;
	cin >> a >> b;
	
	f(a, b);
	cout << sum << endl;
	
	return 0;
}
