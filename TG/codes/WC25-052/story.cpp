#include <bits/stdc++.h>
#define int long long
// #define LOCAL
const int N = 5e4 + 10;

using namespace std;

int n, k, m, a[N], t[N][35];

bool lowbit(int x){
    return x & -x;
}

void update(int p, int v){
    int v1 = a[p];
    a[p] = v;
    while(p <= n){
        t[p][v1]--;
        t[p][v]++;
        p += lowbit(p);
    }
}

int sum(int p, int v){
    int re = 0;
    while(p){
        re += t[p][v];
        p -= lowbit(p);
    }
    return re;
}

bool check(int l, int r){
    for(int i=1; i<=k; i++){
        if(sum(r, i) - sum(l-1, i) <= 0){
            return 0;
        }
    }
    return 1;
}

int query(int p){
    int l = 1, r = p+1;
    while(l < r){
        int mid = (l+r) >> 1;
        if(check(mid, p)){
            r = mid;
        }else{
            l = mid + 1;
        }
    }
    return p - l + 1;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef LOCAL
    freopen("story.in", "r", stdin);
    freopen("story.out", "w", stdout);
    #endif
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    #endif
    cin >> n >> k >> m;
    for(int i=1; i<=n; i++){
        cin >> a[i];
        update(i, a[i]);
    }
    for(int i=1; i<=n; i++){
        t[i][0] = 0;
    }
    for(int ti=1; ti<=m; ti++){
        int op, p, v;
        cin >> op;
        if(op == 1){
            cin >> p >> v;
            update(p, v);
        }else{
            if(!check(1, n)){
                cout << -1 << "\n";
                continue;
            }
            int ans = n;
            for(int i=k; i<=n; i++){
                if(!check(1, i)) continue;
                ans = min(query(i), ans);
            }
            cout << ans << "\n";
        }
    }
    return 0;
}