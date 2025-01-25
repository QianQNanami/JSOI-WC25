#include<bits/stdc++.h>
using namespace std;
int n;
int t[50010];
bool sorts;
bool kan[50010];
int main(){
    freopen("kangroo.in","r",stdin);
    freopen("kangroo.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>t[i];
        if(t[i]<t[i-1]){
            sorts=1;
        }
    }
    if(sorts){
        sort(t+1,t+1+n);
    }
    int ans=0;
    for(int i=n;i>=1;i--){
        if(kan[i])continue;
        int l=1,r=i-1;
        int an=0;
        while(l<=r){
            int mid=(l+r)/2;
            if(kan[mid]){
                r=mid-1;
            }
            else if(t[mid]<=t[i]/2){
                an=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if(an!=0){
            cout<<t[i]<<" "<<t[an]<<endl;
            kan[an]=1;
            ans++;
        }
        else{
            break;
        }
    }
    cout<<ans;
    return 0;
}
