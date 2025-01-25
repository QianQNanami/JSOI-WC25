#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+5;
int a[N];
bool vis[N];
int main(){
	
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	
	int n;
	cin>>n;
	for(int i = 1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	int ans=0;
	for(int i = 1;i<=n;i++){
		if(vis[i]) continue;
		vis[i] = 1;
		int root = a[i];
		for(int j = 1;j<=n;j++){
			if(root <= a[j]/2){
				if(vis[j]) continue;
				
				//cout<<root<<" "<<a[j]<<"\n";
				
				ans++;
				root = a[j];
				vis[j]=1;
			}
		}
	}
	cout<<ans;
	return 0;
}
