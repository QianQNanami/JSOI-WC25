#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 405;
int n; 
int num[N][N];
signed main(){
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	cin >> n;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			cin >> num[i][j];
		}
	}
	int ansa = 0;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			if(i == j){
				ansa += num[i][j];
			}
		}
	}
	int ansb = 0;
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			if(i + j == n + 1){
				ansb += num[i][j];
			}
		}
	}
	int ans = ansa - ansb;
	cout << ans <<endl;
	return 0;
}
/*
4
-3 4 5 6 
7 9 -2 6
1 0 -6 6
6 6 6 6

1 N - 1

*/
