#include <bits/stdc++.h>
#define int long long
// #define LOCAL
const int N = 5e4 + 10;

using namespace std;

int n, a[N];

bool check(int x){
    for(int i=1; i<=x; i++){
        if(a[n-x+i]/2 < a[i]){
            return 0;
        }
    }
    return 1;
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef LOCAL
    freopen("kangaroo.in", "r", stdin);
    freopen("kangaroo.out", "w", stdout);
    #endif
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    #endif
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> a[i];
    }
    sort(a+1, a+n+1);
    int l = 1, r = n/2+1;
    while(l < r){
        int mid = (l+r) >> 1;
        if(check(mid)){
            l = mid + 1;
        }else{
            r = mid;
        }
    }
    cout << l-1;
    return 0;
}