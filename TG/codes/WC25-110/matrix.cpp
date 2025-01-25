#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y)
{
    return x>=y;
}

int used[50001];
int main()
{
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
	int n;cin>>n;
	int a[n];

	for(int x=0;x<n;x++)cin>>a[x];
	sort(a,a+n);
	int cnt=0,t=0;
	for(int x=0;x<n;++x)
    {
        if(a[x]>a[n-1]/2){
                t=x-1;
            break;
        }
    }
    int y=n;
	for(int x=t;x>=0;--x)
    {
        --y;
        if(a[x]<=a[y]/2)cnt++;
    }
    cout<<cnt;
	return 0;
}

