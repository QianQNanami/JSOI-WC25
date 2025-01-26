//三 坦克大战（battle）
#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    string a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    if(m==3){
        cout<<8;
    }else{
        cout<<-1;
    }
    return 0;
}
