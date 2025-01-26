#include <bits/stdc++.h>
using namespace std;
int a[510][510],b[510][510];
int main(){
    int n,m;
    cin >> m >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> b[i][j];
        }
    }
    int maxn = 0;
    cout << a[maxn][maxn+1];
    return 0;
}
