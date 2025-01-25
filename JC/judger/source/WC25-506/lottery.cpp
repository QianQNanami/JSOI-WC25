#include<bits/stdc++.h>
using namespace std;
int main(){
	int M, N, x = 0, y = 1;
	cin >> M >> N;
	for(int i = M + 1; i <= N; i++){
		for(int j = 2; j < i; j++){
			if(i % j == 0){
				y = 0;
				break;
			}
		}
		if(y == 1){
			x++;
		}
		y = 1;
	}
	cout << x << endl;
	return 0;
}
