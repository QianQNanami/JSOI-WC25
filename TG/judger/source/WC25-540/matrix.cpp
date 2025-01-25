#include <iostream>
#include <cstdio>
#define N 405

using namespace std;

int n;
int a[N][N], ans = -1;
bool first = 1;

int d(int i, int j, int x){
	int z = x - i, sum = 0;
	for(int b = 0; b <= z; b++){
		//cout << a[i + b][j + b] << " " << a[x - b][x - i + j - b] << endl;
		sum += a[i + b][j + b];
		sum -= a[i + b][x - i + j - b];
	}
	return sum;
}

int main(){
	freopen("matrix.in", "r", stdin);
	freopen("matrix.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			for(int x = i + 1; x <= n && (x - i) + j <= n; x++){
				//printf("i=%d j=%d x=%d\n", i, j, x);
				if(first == 1){
					ans = d(i, j, x);
					first = 0;
				}
				else ans = max(ans, d(i, j, x));
			}
		}
	}
	cout << ans << endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
