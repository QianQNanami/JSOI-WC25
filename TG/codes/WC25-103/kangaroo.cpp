#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=5e4+5;
ll a[N];
bool f[N];
int n;
int ans;
int main() {
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w", stdout);
    cin >>n;
    for(int i=1; i<=n; i++) {
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    int j=n;
    for(int i=n-1; i>=1; i--) {
        if(a[i] > a[j]/2) continue;
        f[i]=f[j]=1;
        ans ++;
        while(f[j] == 1) j--;
    }
    cout <<ans;
    return 0;
}
