#include <bits/stdc++.h>
#define int long long
// #define LOCAL
const int N = 400 + 10;

using namespace std;

int n, a[N][N], ans = -0x3f3f3f3f;
int c1[N][N], c2[N][N];

void ts2(){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << c1[i][j] << " ";
        }
        cout << "\n";
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << c2[i][j] << " ";
        }
        cout << "\n";
    }
}

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef LOCAL
    freopen("matrix.in", "r", stdin);
    freopen("matrix.out", "w", stdout);
    #endif
    #ifdef LOCAL
    freopen("in.txt", "r", stdin);
    #endif
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            c1[i][j] = c2[i][j] = a[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            c1[i][j] += c1[i-1][j-1];
        }
        for(int j=n; j>=1; j--){
            c2[i][j] += c2[i-1][j+1];
        }
    }
    // ts2();
    for(int k=2; k<=n; k++){
        for(int i=1; i<=n-k+1; i++){
            for(int j=1; j<=n-k+1; j++){
                ans = max(ans, 
                c1[i+k-1][j+k-1]-c1[i-1][j-1]-c2[i+k-1][j]+c2[i-1][j+k]);
            }
        }
    }
    cout << ans;
    return 0;
}