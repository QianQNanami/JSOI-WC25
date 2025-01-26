#include <bits/stdc++.h>
using namespace std;
int M[305][305] , a[305][305];
int dx[5] = {1,0,-1,0},
	dy[5] = {0,1,0,-1};
int q[3][90010];
int main (){
	int n , m , x1 , y1 , x2 , y2;
	char s;
	scanf("%d%d" , &n , &m);
	for (int i = 1;i <= n;i ++){
		for(int j = 1;j <= m;j ++){
			cin >> s;
			if (s == 'Y')	x1 = i , y1 = j;
			if (s == 'T')	x2 = i , y2 = j,M[i][j] = 1;
			if (s == 'E')	M[i][j] = 1;
			if (s == 'R' || s == 'S')	M[i][j] = 0;
			if (s == 'B')	M[i][j] = 2;
		}
	}
	int f , r;
	f = r = 1;
	q[0][f] = x1;
	q[1][f] = y1;
	q[2][f] = 0;
	a[x1][y1] = 0;
	while (f <= r){
		for (int i = 0;i < 4;i ++){
			int x = q[0][f] + dx[i];
			int y = q[1][f] + dy[i];
			if (M[x][y] == 1){
				if (a[x][y] == 0){
					r ++;
					q[0][r] = x;
					q[1][r] = y;
					q[2][r] = q[2][f] + 1;
					a[x][y] = q[2][r];
				}else{
					int t = q[2][f] + 1;
					if (t < a[x][y]){
						r ++;
						q[0][r] = x;
						q[1][r] = y;
						q[2][r] = t;
						a[x][y] = q[2][r];
					}
				}
			}
			if (M[x][y] == 2){
				if (a[x][y] == 0){
					r ++;
					q[0][r] = x;
					q[1][r] = y;
					q[2][r] = q[2][f] + 2;
					a[x][y] = q[2][r];
				}else{
					int t = q[2][f] + 2;
					if (t < a[x][y]){
						r ++;
						q[0][r] = x;
						q[1][r] = y;
						q[2][r] = t;
						a[x][y] = q[2][r];
					}
				}
			}
		}
		f ++;
	}
	if (a[x2][y2])	cout << a[x2][y2] << endl;
	else cout << -1;
	return 0;
}
