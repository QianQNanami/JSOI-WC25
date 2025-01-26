#include<bits/stdc++.h>

using namespace std;

int v(int n){
	int ans;
	ans = n * n;
	return ans;
}
int a[10][70005];

int main (){
	int  n, i = 1, s = 0, sum = 1;
	while(1){
		for (int j = 1; j <= 6; j++ ){
			cin >> a[j][i];
			n = j;
		}
		i++;
		for (int j = 1; j <= n; j++){
			if (a[1][j] == 0 || a[2][j] == 0 || a[3][j] == 0 || a[4][j] == 0 ||a[5][j] == 0 ||a[6][j] == 0){
				break;
			}
		}
		
	}
	for (int j = 1; j <= n; j++){
		for (int k = 1; k <= 6; k++){
			s += v(a[k][j]);
			if (s <= 36){
				cout << 1 << endl;
			} else {
				while (s > 36){
					sum += 1;
					cout << sum << endl;
				}
			}
		}
	}
	return 0;
}
