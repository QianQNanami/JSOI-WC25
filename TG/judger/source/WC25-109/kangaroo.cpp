#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int a[400005];
bool used[400005];
int google;
int cnt = 0;
int n;
int binary(int l,int r)
{
    if(l == r && !used[google])
    {
        return l;
    }
    if(l > r)
    {
        cout << cnt;
        exit(0);
    }
    int mid = (l + r) >> 1;
    if(a[mid] >= 2*a[google] && !used[mid] && used[mid - 1])
    {
        return mid;
    }
    if(a[mid] < 2 * a[google] || used[mid])
    {
        return binary(mid+1,r);
    }
    return binary(l,mid-1);
}

int look(int kan)
{
    int left = lower_bound(a+1,a+n+1,a[kan] * 2) - a;
    if(left > n)
    {
        cout << cnt;
        exit(0);
    }
    if(!used[left])
    {
        return left;
    }
    return binary(left,n);
}

int main()
{
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    cin >> n;

    for(int i = 1;i <= n;i++)
    {
        cin >> a[i];
    }
    sort(a+1,a+1+n);

    for(int i = 1;i <= n;i++)
    {
        //cout << a[i] << " ";
        google = i;
        int ans = look(i);
        //cout << ans << " ";
        used[ans] = true;
        cnt++;
    }

    cout << cnt;


    fclose(stdin);
    fclose(stdout);
    return 0;
}
