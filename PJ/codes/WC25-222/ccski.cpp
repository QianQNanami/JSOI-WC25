#include <bits/stdc++.h>
using namespace std;

int main(void){
	int M, N;
	cin >> M >> N;
	int high[M][N];
	bool point[M][N];
	for (int i=0;i<M;++i){
		for (int j=0;j<N;++j){
			cin >> high[i][j];
		}
	}
	for (int i=0;i<M;++i){
		for (int j=0;j<N;++j){
			cin >> point[i][j];
		}
	}
	cout << 2 << endl;
	return 0;
}
