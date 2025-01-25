#include <iostream>
#include <vector>
using namespace std;

int n, root;
vector<int> tree[100001];
int value[100001];

void build(int u) {
    if (tree[u].size() == 0) return;
    for (int v : tree[u]) {
        build(v);
        value[u] += value[v];
    }
}

int main() {
    freopen("tree.in", "r", stdin);
    freopen("tree.out", "w", stdout);
    scanf("%d", &n);
    int sum =
    for (int i = 1, v, p; i <= n; i++) {
        scanf("%d%d", &v, &p);
        value[i] = v, sum += v;
        if (p == 0) root = i;
        else tree[p].push_back(i);
    }
    build(root);
    int tar = sum / 3, cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (value[i] == tar)
    }
    for (int i = 1; i <= n; i++) cout << value[i] << " ";
}
