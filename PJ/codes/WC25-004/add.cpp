#include<iostream>

using namespace std;

int a[100001], n, m, l, r;
long long k[100001];

int main(){
    scanf("%d", &n);
    for(int i = 1;i <= n;i++){
        scanf("%d", &a[i]);
        k[i] = a[i]+k[i-1];
    }
    scanf("%d", &m);
    for(int i = 1;i <= m;i++){
        scanf("%d%d", &l, &r);
        printf("%d\n", k[r]-k[l-1]);
    }
}
