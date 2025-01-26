#include<bits/stdc++.h>
using namespace std;
int a[10],s,summ;
int main(){
    while(1>0){
        int f=0;
        for(int i=1;i++;i<=6){
            cin>>a[i];
            s+=a[i]*i*i;
            if(a[i]!=0){
                f==1;
            }
        }
        if(f==0){
            return 0;
        }
        summ=s/36;
        cout<<summ<<endl;
    }
    return 0;
}
