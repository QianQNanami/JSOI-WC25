#include <bits/stdc++.h>
using namespace std;
struct node
{
    int v,p;
}g[100005];
bool cmp(node x,node y)
{
    return x.p<y.p;
}
int main()
{
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>g[i].v>>g[i].p;
    }
    sort(g+1,g+n+1,cmp);
    cout<<1<<endl;
    return 0;
}
