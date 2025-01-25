#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=4e2+5;
int ls[N][N];
int rs[N][N];
int w[N][N];
int ans = -INT_MAX;
int n;
int main() {
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w", stdout);
    cin >> n;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cin >>w[i][j];
            rs[i][j] = w[i][j] + rs[i-1][j-1];
            ls[i][j] = w[i][j] + ls[i-1][j+1];
        }
    }
    for(int l=2; l<=n; l++) {
        for(int i=1; i<=n-l+1; i++) {
            for(int j=1; j<=n-l+1; j++) {
                int a=i+l-1,b=j+l-1;
                int d=(rs[a][b]-rs[i-1][j-1])-(ls[a][j]-ls[i-1][b+1]);
                ans = max(ans, d);
            }
        }
    }
    cout <<ans;
    return 0;
}
