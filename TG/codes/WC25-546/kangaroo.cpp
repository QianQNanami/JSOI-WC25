#include <bits/stdc++.h>
using namespace std;
// typedef long long ll;
int a[50005];
bool vis[50005];
int main() {
    ios::sync_with_stdio(false);
    freopen("kangaroo.in", "r", stdin);
    freopen("kangaroo.out", "w", stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	int cnt=0; 
	sort(a+1,a+n+1);
	for(int i=n;i>=1;i--){
		for(int j=i-1;j>=1;j--){
			if(a[i]>=a[j]*2&&(!vis[i])&&(!vis[j])){
				cnt++;
				vis[i]=1;
				vis[j]=1;
			}
		}
	}
	cout<<cnt;
    return 0;
}
