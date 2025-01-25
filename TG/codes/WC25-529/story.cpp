#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 500;
int n,m,K,a[N + 5];
signed main(){
	freopen ("story.in","r",stdin);
	freopen ("story.out","w",stdout);
	cin >> n >> K >> m;
	for (int i = 1;i <= n;i ++) cin >> a[i];
	while (m --){
		int op;
		cin >> op;
		if (op == 1){
			int x,y;
			cin >> x >> y;
			a[x] = y;
		}
		else{
			int M = K + 5;
			int ans[N + 5] = {0},tot = 0; 
			for	(int i = 1;i <= n;i ++){
				for (int j = 1;j <= n;j ++){
					int b[M] = {0},lft = 0,rgt = 0;
					for (int k = i;k <= j;k ++){
						if (j - i + 1 < K) continue;
						b[a[k]] ++;
						lft = i,rgt = j;
					}
					bool flag = 0;
					for	(int k = 1;k <= K;k ++){
						if (b[k] == 0){
							flag = 1;
							break;
						}
					}
					if (!flag) ans[++ tot] = rgt - lft + 1;
				}
			} 
			sort (ans + 1,ans + 1 + tot);
			cout << (ans[1] == 0 ? -1 : ans[1]) << endl;
		}
	}
	return 0;
}
/*
4 3 5
2 3 1 2 
2
1 3 3
2 
1 1 1
2

6 3 6
1 2 3 2 1 1
2 
1 2 1
2
1 4 1
1 6 2
2
*/

