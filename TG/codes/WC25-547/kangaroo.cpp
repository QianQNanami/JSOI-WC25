#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5;
int n;
int ans=0;
int a[maxn];
bool b[maxn];
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.oout","w",stdout);
	cin>>n;
	memset(b,0,sizeof(b));
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	a[n+1]=10000000;
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		int c=2*a[i];
		int pos=lower_bound(a+1,a+n+2,c)-a;
		if(pos==n+1)break;
		else if(b[pos]){
			while(pos!=n+1){
				if(a[++pos]>=2*a[i]){
					ans++;
					b[pos]=1;
					break;
				}
			}
		}
		else ans++,b[pos]=1;
	}
	cout<<ans;
	return 0;
}
