#include <iostream>
#include <algorithm>
using namespace std;

int n, ans;
int a[50001];

int main() {
    freopen("kangaroo.in", "r", stdin);
    freopen("kangaroo.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }
    sort(a + 1, a + n + 1);
    for (int i = n / 2, j = n; i > 0; i--) {
        if (a[j] >= a[i] * 2) ans++, j--;
    }
    printf("%d\n", ans);
}
