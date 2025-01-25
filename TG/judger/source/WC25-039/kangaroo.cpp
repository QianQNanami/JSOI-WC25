#include<bits/stdc++.h>
using namespace std;
int a[50005],n;
bool vis[50005];
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int ans=0;
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(j/2>=i&&!vis[i]&&!vis[j]){
				ans++;
				vis[i]=1;
				vis[j]=1;
			}
		}
	}
	cout<<ans;
	return 0;
}//O(n^2/2)

