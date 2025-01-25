#include <bits/stdc++.h>
#define MAXN 100005
using namespace std;

int n,weight[MAXN];
double half[MAXN];
deque<double> deq1,deq2;

int main()
{
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    int cnt=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d",&weight[i]);
        half[i]=weight[i]/2.0;
    }
    sort(weight,weight+n+1);
    sort(half,half+n+1);
    for(int i=1; i<=n; i++)
    {
        deq1.push_back(weight[i]);
        deq2.push_back(half[i]);
    }
    while(!deq2.empty())
    {
        int tmp=deq2.front();
        if(tmp>=deq1.front())
        {
            cnt++;
            deq1.pop_front();
            deq2.pop_front();
        }
        else
            deq2.pop_front();
    }

    cout << cnt;

    return 0;
}
