#include <iostream>
#include <stdlib.h>
int d1[430][430], d2[430][430];
int main(){
	freopen("matrix.in", "r", stdin);
	freopen("matrix.out", "w", stdout);
	int n;
	std::cin >> n;
	for(int i = 0;i < n; i++){
		for(int j =0; j < n ; j++){
			std::cin >> d1[i][j];
			d2[i][j] = d1[i][j];
		}
	}
	int last = 0;
	for(int s = 2;s <= n; s++){
		for(int j =1; j <= s ; j++){
			int i = s-j;
			d2[j][i] += last;
			last = d2[j][i];
			/*if(i + j < 1){
				d1[i + j + 1][n-i+j] = a[i][j];
				d2[n-i+j][i + j + 1] = a[i][j];
			}
			d1[i + j + 1][n-i+j] = d1[i + j - 1][n-i+j] + a[i][j];
			d2[n-i+j][i + j + 1] = d2[n-i+j][i + j - 1] + a[i][j];
			if(n-i+j > ma){
				ma = n-i+j;
			}
			if(i + j + 1 < mi){
				mi = i + j + 1;
			}*/
		}
	}
	last = 0;
	for(int s = -n+1;s < n; s++){
		for(int j =0; j <= n ; j++){
			int i = s+j;
			d1[j][i] += last;
			last = d1[j][i];
		}
	}
	//ma = mi = ma > mi ? ma: mi;
	/*for(int i = 0;i < 20; i++){
		for(int j =0; j < 20 ; j++){
			std::cout << d1[i][j] << ' ';
		}
		std::cout << '\n';
	}
	for(int i = 0;i < 20; i++){
		for(int j =0; j < 20 ; j++){
			std::cout << d2[i][j] << ' ';
		}
		std::cout << '\n';
	}*/
	int r = 1, c = 1, i = 0, max = -114514;
	for(; r +i <= n; r ++){
		for(; c + i <= n; c++){
			for(; r + i <= n && c + i <= n; i++){
				int e = d1[r+i][c+i] - d2[r+i][c];
				max = max > e ? max : e;
			}
		}
	}
	std::cout << max;
	return 0;
} 
