#include <iostream>
#include <algorithm>
#define N 50005

using namespace std;

int n, a[N];

void init(){
	freopen("kangaroo.in", "r", stdin);
	freopen("kangaroo.out", "w", stdout);
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
}

void solve(){
	int i;
	for(i = 1; i <= n / 2; i++){
		bool o = 0;
		for(int j = 1; j <= i; j++){
			bool b = 0;
			int x = i + 1;
			while(a[x] < a[j] * 2 && x + 1 <= n)x++;
			if(x <= n && a[x] >= a[j] * 2){
				x++;
				b = 1;
			}
			if(b == 0){
				o = 0; break;
			}
			if(j == i)o = 1;
		}
		if(o == 0){
			i--;
			break;
		}
	}
	cout << i << endl;
}

void close(){
	fclose(stdin);
	fclose(stdout);
}

int main(){
	init();
	solve();
	close();
	return 0;
}
