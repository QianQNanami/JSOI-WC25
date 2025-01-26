#include<bits/stdc++.h>
using namespace std;
long long a[310][310];
int main(){
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	cout << "-1";
	return 0;
}
