#include<bits/stdc++.h>
using namespace std;
int sb(int x){
    if(x<2)return 0;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)return 0;
    }
    return 1;
}
int main(){
    int a,b,c=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(sb(i))c++;
    }
    cout<<c<<'\n';
}
