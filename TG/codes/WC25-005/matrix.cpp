#include <iostream>
using namespace std;

int n;
int a[401][401];
int ltr[800], rtl[80];

int main() {
    freopen("matrix.in", "r", stdin);
    freopen("matrix.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j + i - 1 <= n; j++) {
            ltr[n + i - 1] += a[j][j + i - 1];
        }
    }

    for (int i = 2; i <= n; i++) {
        for (int j = n - i + 1; j > 0; j--) {
            ltr[n - i + 1] += a[j + i - 1][j];
        }
    }
    for (int i = n; i > 0; i--) {
        for (int j = 1; j + i - 1 <= n; j++) {
            rtl[n + i - 1] += a[j][i - j + 1];
        }
    }
    /*for (int i = 1; i <= n; i++) {
        for (int j = 1; i + j - 1 <= n; j++) {
            ltr[n + i - 1] += a[j][i + j - 1];
        }
    }*/
    for (int i = 1; i < 2 * n; i++) cout << rtl[i] << " ";
}
