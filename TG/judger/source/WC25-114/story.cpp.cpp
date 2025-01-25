#include <bits/stdc++.h>
#define int long long
#define tk0 t[k]
#define tk1 t[k << 1]
#define tk2 t[(k + 1) << 1]
using namespace std;
const int N = 5e4 + 5;
struct node{int l, r, data; int f; } t[N];
int n, K, m;
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
void build(int k, int l, int r){
	t[k].l = l;
	t[k].r = r;
	if(l == r){
		t[k].data = read();
		if(k <= K) t[k].f = 1;
		return ;
	}
	int mid = (l + r) >> 1;
	build(k << 1, l, mid);
	build((k + 1) << 1, mid + 1, r);
	t[k].data = t[k << 1].f + t[(k + 1) << 1].f;
}
int query(int k, int x, int y){
	int l = tk0.l, r = tk0.r;
	while(x <= y){
		int mid = (x + y) >> 1;
		if(query(k << 1, x, mid)) y = mid;
		else x = mid;
	}
	return x;
}
void updata(int k, int x, int v){
	int l = tk0.l, r = tk0.r;
	if(l == r && l == x){
		int tmp = tk0.data;
		tk0.data = v;
		if(tk0.f = 1 && tmp != v) tk0.f = 0;
		return ;
	}
	int mid = (l + r) >> 1;
	if(x <= mid) updata(k << 1, x, v);
	else updata((k + 1) << 1, x, v);
	t[k].f = t[k << 1].f + t[(k + 1) << 1].f;
}
signed main(){
	freopen("story.in", "r", stdin);
	freopen("story.out", "w", stdout);
	n = read();
	K = read();
	m = read();
	build(1, 1, n);
	while(m --){
		int f = read();
		if(f == 1){
			int x = read(), v = read();
			updata(1, x, v);
		}
		else{
			int x = query(1, 1, n);
			if(x) cout << x << endl;
			else cout << -1 << endl;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

