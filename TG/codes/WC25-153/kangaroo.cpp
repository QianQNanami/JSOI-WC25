#include<bits/stdc++.h>
using namespace std;
int n;
int a[50005];
bool ishid[50005];
int cnt=0;
int main(){
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    cin>>n;
    for(int i = 1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+n+1);
    for(int i = n;i>=1;i--){
        if(ishid[i]) continue;
        ishid[i]=1;
        int half=a[i]/2;
        int index=lower_bound(a+1,a+n+1,half)-a;
        if(index==1&&ishid[1]) break;
        if(a[index]>half||ishid[index]){
            while(true){
                --index;
                if(!ishid[index]) break;
            }
        }
        if(index<1) break;
        ++cnt;
        ishid[index]=1;
    }
    cout<<cnt;
    return 0;
}

/*
8
2 5 7 6 9 8 4 2
*/
