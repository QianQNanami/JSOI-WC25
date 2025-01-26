#include <bits/stdc++.h>
using namespace std;
int a[10005];
struct add{
    int x,y;
}b[10005];
int main (){
    int n,m;
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    cin >> m;
    for (int i = 1; i <= m; i++){
        cin >> b[i].x >> b[i].y;
    }
    for (int i = 1; i <= m; i++){
        int sum = 0;
        for (int j = b[i].x; j <= b[i].y; j++){
            sum += a[j];
        }
        cout << sum << endl;
    }
    return 0;
}
