#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5+10;
struct Node
{
    vector<int> child;
    int date;
}tree[MAXN];
struct Fan
{
    vector<int> fa;
    int date;
}tree_fan[MAXN];
vector<int> can;
queue<int> q;
bool flag[MAXN];
long long all,ans;
int n;
void add(int now,int need)
{
    need+=tree[now].date;
    for(auto i:tree_fan[now].fa)
    {
        tree_fan[i].date+=need;
        add(i,need);
    }
}
long long jie(int now)
{
    long long need=1;
    for(int i=now-1;i>1;i--)
    {
        need*=now;
    }
    return need;
}
bool fi(int now,int need)
{
    for(auto i:tree[now].child)
    {
        if(i==need) return false;
        fi(i,need);
    }
    return true;
}
int main()
{
    freopen("tree.in","r",stdin);
    freopen("tree.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int v,p;
        cin>>v>>p;
        tree[i].date=v;
        tree_fan[i].date=v;
        tree[p].child.push_back(i);
        tree_fan[i].fa.push_back(p);
        all+=v;
    }
    if(all%3!=0)
    {
        cout<<0<<endl;
        return 0;
    }
    all/=3;
    for(int i=1;i<=n;i++)
    {
        if(!tree[i].child.size()) q.push(i);
    }
    while(!q.empty())
    {
        int now=q.front();
        q.pop();
        add(now,0);
    }
    for(int i=1;i<=n;i++)
    {
        if(tree_fan[i].date==all)
        {
            for(int j=1;j<=n;j++)
            {
                if(i!=j && tree_fan[j].date-all==all)
                {
                    flag[i]=true;
                    q.push(i);
                    break;
                }
            }

        }
    }
    if(q.size()==0)
    {
        cout<<0<<endl;
        return 0;
    }
    ans+=jie(q.size()-1);
    cout<<ans<<endl;
    return 0;
}
