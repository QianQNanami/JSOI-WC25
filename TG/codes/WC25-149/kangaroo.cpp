#include <bits/stdc++.h>
using namespace std;
const int N=5e4+5;
int n,a[N],d;
int f(int x,int l,int r){
    while(l<r){
        int mid=l+(r-l)/2;
        if(a[mid]>=x){
            r=mid;
        }
        else{
            l=mid+1;
        }
    }
    if(a[l]<x){
        return -1;
    }
    return l;
}
int main(){
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        d=f(2*a[i],d,n-1);
        if(d==-1){
            cout<<i;
            return 0;
        }
    }
}
