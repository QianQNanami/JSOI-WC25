#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxn=50005;
ll n,a[maxn],ans;
bool b[maxn];
int main(){
	freopen("kangaroo.in","r",stdin);
	freopen("kangaroo.out","w",stdout);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>a[i];
		b[i]=true;
	}
	sort(a,a+n+1);
	for(ll i=n;i>=1;i--){
		for(int j=1;j<=n;j++){
			if(a[i]/2==a[j]&&b[i]&&b[j]){
				ans++;
				b[i]=false,b[j]=false;
				break;
			}
			else{
				for(int k=1;k<=j;k++){
					if(a[i]/2-k==a[j]&&b[i]&&b[j]){
				ans++;
				b[i]=false,b[j]=false;
				break;
					}
				}
			}
		}
	}
		
		
	cout<<ans;
	return 0;
}

