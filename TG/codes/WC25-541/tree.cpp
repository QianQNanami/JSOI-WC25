#include <bits/stdc++.h>
//#define int long long
using namespace std;
const int N=3e5;
int n;
int fa[N+5];
vector<vector<int> > T;
int s[N+5];
int val[N+5];
int dfs(int x){
    s[x]=val[x];
    for (int i=0;i<T[x].size();i++){
        s[x]+=dfs(T[x][i]);
    }
    return s[x];
}
bool find(int x,int y){
    if (x==0) return false;
    if (x==y) return true;
    return find(fa[x],y);
}
int ans;
signed main(){
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
    int n;
    cin>>n;
    T.resize(n+1);
    for (int i=1;i<=n;i++){
        int v,p;
        cin>>v>>p;
        T[p].push_back(i);
        fa[i]=p;
        val[i]=v;
    }
    int root=T[0][0];
    dfs(root);
    //for (int i=1;i<=n;i++){
    //    cout<<s[i]<<endl;
    //}
    for (int i=1;i<=n;i++){
        for (int j=i+1;j<=n;j++){
            if (i==root||j==root) continue;
            int x1,y1,anot;
            int x=i,y=j;
            if (find(x,y)){
                x1=s[x];
                y1=s[y]-s[x];
                anot=s[root]-x1-y1;
            }
            else if (find(y,x)){
                x1=s[x]-s[y];
                y1=s[y];
                anot=s[root]-x1-y1;
            }
            else {
                x1=s[x];
                y1=s[y];
                anot=s[root]-x1-y1;
            }
            if (x1==y1&&x1==anot){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}
/*10
0
0
0
1
0
2
0
3
0
4
0
5
0
6
0
7
0
8
0
9
*/
