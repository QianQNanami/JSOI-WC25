#include <bits/stdc++.h>
using namespace std;
const int maxn=5e4+5;
struct A{
	int v;
	int hal;
}a[maxn];
int vis[maxn];
bool cmp(A x,A y){
	return x.v>y.v;
}
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].v;
		a[i].hal=a[i].v/2;
	} 
	sort(a+1,a+n+1,cmp);
	int ans=0;
	for(int i=1;i<=n;){
		for(int j=2;j<=n&&j!=i;j++){
			if(a[i].hal>=a[j].v&&vis[j]==0&&vis[i]==0){
				ans++;
				vis[j]=1;
				vis[i]=-1;
				i++; 
			}
		}
		i++;
	}
	cout<<ans;
	return 0;
}
