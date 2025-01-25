#include <bits/stdc++.h>
#define MAXN 100005
using namespace std;

int n,k,m;
int line[MAXN];
map<int,bool> mp;

int shortest()
{
    int cnt=0;
    for(int i=1; i<=n; i++)
    {
        if(mp[i]==false)
        {
            cnt++;
            mp[i]=true;
        }
        if(cnt==k)
            break;

    }
    if(cnt<k)
        return -1;
    return cnt;
}

int main()
{
    freopen("story.in","r",stdin);
    freopen("story.out","w",stdout);
    scanf("%d%d%d",&n,&k,&m);
    for(int i=1; i<=n; i++)
        scanf("%d",&line[i]);
    while(m--)
    {
        int a=0,p=0,v=0;
        scanf("%d",&a);
        if(a==1)
        {
            scanf("%d%d",&p,&v);
            mp.clear();
            line[p]=v;
        }
        else if(a==2)
        {
            cout << shortest() <<endl;
        }
    }
    return 0;
}
