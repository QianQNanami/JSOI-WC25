#include<bits/stdc++.h>
using namespace std;
int n,t1,t2,ans;
int a[405][405];
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(i==j)
            {
                t1+=a[i][j];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            if(j==n-1-i)
            {
                t2+=a[i][j];
            }
        }
    }
    cout<<t1-t2;
    return 0;
}
