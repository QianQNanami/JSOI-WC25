#include <iostream>
#include <cmath>
using namespace std;
int a[6];
bool judge()
{
    for(int i=1;i<=6;i++)
        if(a[i])return true;
    return false;
}
int ans;
int main()
{
    do
    {
        for(int i=1;i<=6;i++)
        {
            cin>>a[i];
        }
        if(!judge())break;
        ans+=a[6];
        while(a[5]&&a[1]>=11)
        {
            a[5]--;
            a[1]-=11;
            ans++;
        }
        int sum=0;
        sum=a[1]/4+a[2];
        while(a[4]&&sum>=5)
        {
            a[4]--;
            sum-=5;
            ans++;
        }
        ans+=a[4]+a[5];
        ans+=a[3]/4;
        a[3]/=4;
        for(int i=1;i<=3;i++)
        {
            ans+=sqrt(a[i])*i/6;
        }
        cout<<ans<<endl;
    }while(1);



    return 0;
}
