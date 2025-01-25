#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
const int N = 5e4 + 10;
int a[N];
int vis[N];
signed main(){
    freopen("kangaroo.in", "r", stdin);
    freopen("kangaroo.out", "w", stdout);
    cin >> n;
    for(int i = 1;i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + 1 + n);
    int ans = 0;
    for(int i = n;i >= 1; i--){
        int lft = 1, rgt = i - 1;
        int Ans = 0;
        while(lft <= rgt){
            int mid = (lft + rgt) >> 1; 
            if(a[mid] <= a[i] / 2 && !vis[mid]){
                lft = mid + 1;
                Ans = mid;
            }
            else{
                rgt = mid - 1;
            }
        }
        if(Ans != 0){
            vis[Ans] = true;
            ans ++;
        }
        else{
            cout << ans << endl;
            return 0;
        }
    }
    return 0;
}
