#include <bits/stdc++.h>
using namespace std;
int n;
int maxn = INT_MIN , a[405][405] = {} , dpa[405][405] = {} , dpb[405][405] = {} , dpc[405][405] = {} , dpd[405][405] = {};
int main(){
	freopen("matrix.in" , "r" , stdin);
	freopen("matrix.out" , "w" , stdout);
	cin >> n;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++) cin >> a[i][j];
	}
	for(int i = 1 ; i <= n - 1 ; i++){
		dpa[i][0] = a[i][1];
		dpb[i][0] = a[n][i];
		dpc[i][0] = a[1][i];
		dpd[i][0] = a[1][i];
	}
	for(int i = 1 ; i <= n - 1 ; i++){
		for(int j = 1 ; j <= n - i ; j++){
			dpa[i][j] = dpa[i][j - 1] + a[i + j][j + 1];
			dpb[i][j] = dpb[i][j - 1] + a[i + j][j + 1];
		}
	}
	for(int i = 1 ; i <= n - 1 ; i++){
		for(int j = 1 ; j <= n - i ; j++){
			dpc[i][j] = dpc[i][j - 1] + a[n - j][j + 1];
			dpb[i][j] = dpb[i][j - 1] + a[n - j][i + j];
		}
	} 
	for(int i = 1 ; i <= n - 1 ; i++){
		for(int j = 1 ; j <= n - i ; j++){
			if(i != 1) maxn = max(maxn , dpa[i][j] - dpd[j + i][j + i] + dpd[j + i][j - i]);
			else maxn = max(maxn , dpa[i][j] - dpd[j + i][j]);
			if(i != 1) maxn = max(maxn , dpc[i][j + i] - dpc[i][i - j - 1] - dpb[i][j]);
			else maxn = max(maxn , dpc[i][j] - dpb[i][j]);
		}
	}
	cout << maxn;
	return 0; 
}	 
