#include <bits/stdc++.h>
using namespace std;
int n, m, k;
const int N = 1e5 + 10;
int a[N];
int New[35];
int q[N * 8];
signed main(){
    freopen("story.in", "r", stdin);
    freopen("story.out", "w", stdout);
    cin >> n >> k >> m;
    for(int i = 1;i <= n; i++){
        cin >> a[i];
    }
    for(int i = 1;i <= m; i++){
        int f;
        cin >> f;
        if(f == 1){
            int x, y;
            cin >> x >> y;
            a[x] = y;
        }
        if(f == 2){
        	memset(New, 0, sizeof(New));
            int lft = 1, rgt = 0;
            q[++rgt] = 1;
            New[a[1]] = 1;
            int ans = INT_MAX;
            for(int i = 2;i <= n; i++){
                q[++rgt] = i;
                New[a[i]] = i;
                while(lft <= rgt && New[a[q[lft]]] != q[lft]) lft ++;
                int f = 1;
                for(int i = 1;i <= k; i++){
                    if(!New[i]){
                        f = 0;
                        break;
                    }
                }
                if(f){
                    ans = min(ans, rgt - lft + 1);
                }
            }
            if(ans == INT_MAX) ans = -1;
            cout << ans << endl;
        }
    }
    return 0;
}