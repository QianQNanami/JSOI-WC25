#include<bits/stdc++.h>
using namespace std;
int a[8],cnt,ans,t2,t1;
int main()
{
    while(1)
    {
        cnt=0;ans=0;t2=0;t1=0;
        for(int i=1;i<=6;i++) cin>>a[i];
        if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0) break;
        ans+=a[6]+a[5]+a[4]; 
        ans+=ceil(a[3]/4.0); 
        if(a[3]%4==1) t2=5;
        if(a[3]%4==2) t2=3;
        if(a[3]%4==3) t2=1;
        t2+=5*a[4]; 
        if(a[2]>t2) ans+=ceil((a[2]-t2)/9.0);
        t1=ans*36-a[6]*36-a[5]*25-a[4]*16-a[3]*9-a[2]*4;
        if(t1<a[1]) ans+=ceil((a[1]-t1)/36.0);
        cout<<ans<<endl;
    }
    return 0;
}

