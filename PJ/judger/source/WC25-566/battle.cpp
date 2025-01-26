#include <bits/stdc++.h>
using namespace std;
string a[310][310];
int main (){
    int n,m;
    cin >> m >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <=m; j++){
            cin >> a[i][j];
        }
    }
    cout << "-1";
    return 0;
}
