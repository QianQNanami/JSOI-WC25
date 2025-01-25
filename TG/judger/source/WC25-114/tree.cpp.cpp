#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e5 + 5;
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
pair < int , int > a[N];
int fa[N];
int find(int x){
	if(fa[x] == x) return x;
	return find(fa[x]);
}
bool find2(int x, int y){ //x是y的祖先？ 
	if(fa[y] == y) return 0;
	if(fa[y] == x) return 1;
	return find2(x, fa[y]);
}
bool find3(int x, int y){ //y是x的祖先？ 
	if(fa[x] == x) return 0;
	if(fa[x] == y) return 1;
	return find3(fa[x], y);
}
void merge(int x, int y){
	int fx = find(x), fy = find(y);
	if(fx != fy) fa[fx] = fy;
}
signed main(){
	freopen("tree.in", "r", stdin);
	freopen("tree.out", "w", stdout);
	int n = read();
	for(int i = 0; i < n; i ++) fa[i] = i;
	for(int i = 1; i <= n; i ++){
		int u = read(), f = read();
		a[i].first += u;
		a[i].second = f;
		merge(i, f);
		int tmp = f;
		while(a[tmp].second != 0){
			a[tmp].first += u;
			tmp = a[tmp].second;
			//cout << i << ':' << a[i].first << ' ' << a[i].second << endl;
		}
		a[tmp].first += u;
	}
	//for(int i = 1; i <= n; i ++) cout << a[i].first << endl;
	int ans = 0;
	for(int i = 1; i <= n; i ++){
		for(int j = 2; j <= n; j ++){
			int x = a[i].first, y = a[j].first, z = a[1].first - x - y;
			if(find2(x, y) && (x - y == y && y == z)) ans ++;
			else if(find3(x, y) && (x == y - x && x == z)) ans ++;
			else if(x == y && y == z) ans ++;
			//cout << x << ' ' << y << ' ' << z << endl;
		}
	}
	cout << ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

