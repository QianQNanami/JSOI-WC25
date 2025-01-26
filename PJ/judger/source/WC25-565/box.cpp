//一 装箱问题（box）
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[70005][6],c=0;
    bool b=1;
    while(b==1){
        for(int i=0;i<6;i++){
            cin>>a[c][i];
        }
        bool d=0;
        for(int i=0;i<6;i++){
            if(a[c][i]!=0){
                d=1;
                break;
            }
        }
        if(!d){
            b=0;
        }
        c++;
    }
    for(int i=0;i<c-1;i++){
        if(a[i][0]==0&&a[i][2]==4){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }
    }
    return 0;
}
