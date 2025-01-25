#include<bits/stdc++.h>
using namespace std;
int c=0;
int sb(int x,int y){
    if((x-y)/2){
        int t,tt;
        c=2;
        t=(x-y)/2;
        tt=x-((x-y)/2);

        if((x-y)/2){
            c++;
        }
        sb(t,tt);
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    sb(n,k);
    cout<<c<<'\n';
    return 0;
}
