#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a[100010],summ=0,anss=0,flag=0;
    for(int i=1;;i++){
        for(int j=1;j<=6;j++){
            cin>>a[j];
            if(j%6==1&&a[j]==0&&a[j+1]==0&&a[j+2]==0&&a[j+3]==0&&a[j+4]==0&&a[j+5]==0){
                flag=1;
                break; 
            }
        }
        if(flag==1){
            break;
        }
        n++;
        cout<<n;
    }
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=6;j++){
            if(a[j]!=0){
                summ+=a[j];
            }
        }
        if(summ>36&&summ%36==0){
            anss=summ/36;
        }
        else if(summ>36&&summ%36!=0){
            anss=summ/36+1;
        }

        cout<<anss<<endl;
        anss=0;
        summ=0;
    }
    return 0;
}
