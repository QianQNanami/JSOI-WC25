#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5e3 + 5;
inline int read(){
	char c;
	while(c = getchar()){ if('0' <= c && c <= '9' || c == '-') break; }
	int tmp = 0, op = 1;
	if(c == '-') op = -1;
	else tmp = c - '0';
	while(c = getchar()){
		if('0' <= c && c <= '9') tmp = tmp * 10 + (c - '0');
		else break;
	}
	return tmp * op;
}
int a[N];
bool vis[N], m[N][N];
signed main(){
	freopen("kangaroo.in", "r", stdin);
	freopen("kangaroo.out", "w", stdout);
	int n = read();
	for(int i = 1; i <= n; i ++) a[i] = read();
	for(int i = 1; i <= n; i ++){
		for(int j = 1; j <= n; j ++){
			if(i == j) continue;
			if(a[j] >= (a[i] << 1)) m[i][j] = 1;
			//cout << m[i][j] << ' ';
		}
		//cout << endl;
	}
	int ans = 0;
	for(int i = 1; i <= n; i ++){
		for(int j = 1; j <= n; j ++){
			if(m[j][i] == 1 && !vis[j]){
				ans ++;
				vis[j] = 1;
			}
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

