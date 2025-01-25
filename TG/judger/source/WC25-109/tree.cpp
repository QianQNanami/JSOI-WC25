#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

struct node
{
    int value;
    int to;
};

vector <node> g[100005];
int parent[100005] = {};
int v[100005] = {};
int p[100005] = {};

int main()
{
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
    int n;
    cin >> n;
    for(int i = 1;i <= n;i++)
    {
        cin >> v[i] >> p[i];
        g[i].pushback()
    }
    fclose(stdin);
    fclode(stdout);
    return 0;
}
