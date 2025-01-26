#include<bits/stdc++.h>
using namespace std;

const int N = 500;
int m, n;
int a[N + 5][N + 5], b[N + 5][N + 5];

int main(){
	cin >> m >> n;
	for(int i = 1;i <= m;i++){
		for(int j = 1;j <= n;j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1;i <= m;i++){
		for(int j = 1;j <= n;j++){
			cin >> b[i][j];
		}
	}
	cout << m * n << "\n";
	return 0;
}
