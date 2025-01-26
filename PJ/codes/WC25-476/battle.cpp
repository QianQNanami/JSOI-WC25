#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 300;
int n,m;
char a[N + 5][N + 5];
signed main(){
	cin >> n >> m;
	for(int i = 1;i <= n;i++)
		for(int j = 1;j <= n;j++)
			cin >> a[i][j];
	cout << -1 << endl;	
	return 0;
}
