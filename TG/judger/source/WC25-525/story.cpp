#include <bits/stdc++.h>
#define int long long
using namespace std;

template<typename T>
T read(T x){
    T opt = 1, sum = 0;
    char ch = getchar();
    while(!isdigit(ch)) opt = (ch == '-') ? -1 : 1, ch = getchar();
    while( isdigit(ch)) sum = (sum << 1) + (sum << 3) + (ch ^ 48), ch = getchar();
    return opt * sum;
}
#define read read(0ll)

const int N = 1e5 + 5;
int a[N];
signed main()
{
    freopen("story.in","r",stdin);
    freopen("story.out","w",stdout);
	int n = read, k = read, m = read;
	for(int i = 1;i <= n;i ++ ) a[i] = read;
	for(int i = 1;i <= m;i ++ ){
		int op; cin >> op;
		if(op == 1){
			int p = read, v = read; 
			a[p] = v;
			
		}
		else {int ans = INT_MAX;
			for(int i = 1;i <= n;i ++ ){
				for(int j = i + k - 1;j <= n;j ++){
					map<int, int> mp;
					int cnt = 0;
					for(int x = i;x <= j;x ++){
						mp[a[x]] ++;
						if(mp[a[x]] == 1) cnt ++ ;
						if(cnt == k) break;
					}
					if(cnt >= k){
						ans = min(ans, j - i + 1);
						if(ans == k) break;
					}
				}
				if(ans == k) break;
			}
			cout << (ans == INT_MAX ? -1 : ans) << endl;
		}
	}
    return 0;
}
/*
6 3 6
 1 2 3 2 1 1
 2 
  1 2 1
 2
   1 4 1
 1 6 2
 2
*/
