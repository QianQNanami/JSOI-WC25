#include<bits/stdc++.h>
#define fre 1
using namespace std;
typedef long long ll;

#define mp(a,b) make_pair(a,b)
#define inf 0x3f3f3f3f

const int N=400+10;
ll n,a[410][410],s1[410][410],s2[410][410];
deque<int>q;

int main(){
#ifdef fre
	freopen("matrix.in","r",stdin);
	freopen("matrix.out","w",stdout);
#endif
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=n;j++){
    		cin>>a[i][j];
    		s1[i][j]=s1[i-1][j-1]+a[i][j];
    		s2[i][j]=s2[i-1][j+1]+a[i][j];
		}
	}
	ll ans=LONG_MIN;
	for(int k=2;k<=n;k++){
		for(int i=1;i<=n-k+1;i++){
			for(int j=1;j<=n-k+1;j++){
				ans=max(ans,s1[i+k-1][j+k-1]-s1[i-1][j-1]-s2[i+k-1][j]-s2[i-1][j+k]);
			}
		} 
	}
	cout<<ans<<endl;
#ifdef fre
	fclose(stdin);
	fclose(stdout);
#endif
    return 0;
}

//O(n^3)
// 64000000 
