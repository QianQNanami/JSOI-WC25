#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
int a[100000];
int vis[100000];
int ans=0;
signed main(){
    freopen("kangaroo.in","r",stdin);
    freopen("kangaroo.out","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=n;i>=1;i--){
		if(vis[i]!=0){
			continue;
		}
		for(int j=i-1;j>=1;j--){
			if(a[i]>=a[j]*2&&vis[j]==0){
				vis[i]=1;
				vis[j]=1;
				ans+=1;
				break;
			}
		}
	}
	cout<<ans;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
