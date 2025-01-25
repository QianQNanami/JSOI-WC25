#include<bits/stdc++.h>
using namespace std;
int n;
int s[50500];
int main(){
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i];
    }
    sort(s+1,s+n+1);
    int mid=(1+n)>>1;
    int x=mid,cnt=0;
    while(n>mid&&x>0){
        if((s[n]>>1)>=s[x]){
            n--;
            cnt++;
        }
        x--;
    }
    cout<<cnt;
    return 0;
}
