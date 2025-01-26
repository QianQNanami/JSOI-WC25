#include <iostream>
using namespace std;
long long a[100005],sum[100005];
int n,k;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }
    cin>>k;
    int l,r;
    while(k--)
    {
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<endl;
    }


    return 0;
}
