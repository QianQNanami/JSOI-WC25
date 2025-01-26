//二 区间和（add）
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+5];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int temp1,temp2,cnt=0;
        cin>>temp1>>temp2;
        for(int i=temp1;i<=temp2;i++){
            cnt+=a[i];
        }
        cout<<cnt;
    }
    return 0;
}
