#include<bits/stdc++.h>
using namespace std;
int sum1[401][401];//从左上到右下
int sum2[401][401];//从右上到左下
int a[401][401];
int maxx=-0x3f3f3f3f3f;
int main(){
    freopen("matrix.in","r",stdin);
    freopen("matrix.out","w",stdout);
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int k = 1;k<=n;k++){
        sum1[k][1]=a[k][1];
        int i=k+1,j=2;
        while(true){
            sum1[i][j]=sum1[i-1][j-1]+a[i][j];
            ++i,++j;
            if(i>n||j>n) break;
        }
    }
    for(int k = 2;k<=n;k++){
        sum1[1][k]=a[1][k];
        int i=2,j=k+1;
        while(true){
            sum1[i][j]=sum1[i-1][j-1]+a[i][j];
            ++i,++j;
            if(i>n||j>n) break;
        }
    }

    for(int k = 1;k<=n;k++){
        sum2[1][k]=a[1][k];
        int i=2,j=k-1;
        while(true){
            sum2[i][j]=sum2[i-1][j+1]+a[i][j];
            ++i,--j;
            if(i>n||j<0) break;
        }
    }
    for(int k = 2;k<=n;k++){
        sum2[k][n]=a[k][n];
        int i=k+1,j=n-1;
        while(true){
            sum2[i][j]=sum2[i-1][j+1]+a[i][j];
            ++i,--j;
            if(i>n||j<0) break;
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            int k=i,l=j;
            while(true){
                ++k,++l;
                if(k>n||l>n) break;
                int x1=sum1[k][l]-sum1[i-1][j-1];
                int x2=sum2[k][j]-sum2[i-1][l+1];
                int r=x1-x2;
                if(r>maxx){
                    maxx=r;
                }
            }
        }
    }
    cout<<maxx;
    return 0;
}

