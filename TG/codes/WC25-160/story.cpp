#include <bits/stdc++.h>
#define ll long long
#define db(s,a) cout << s << ":" << a << endl
#define dbarr(a,n) for(ll i=1;i<=n;i++) cout << a[i] << " " ; cout << endl ;
#define isok cout << "ok" << endl
using namespace std ;
ll n , k , m , i , j , l , L , r , rr , mid , midd , p , v , f , siz , ans , a[50005] , vis[50005][32] ;
bool check(ll l , ll r){
	for(ll i=1;i<=k;i++){
		if(vis[r][i]-vis[l-1][i]==0){
			return false ;
		}
	}
	return true ;
}
int main(){
//	freopen("data.in","r",stdin) ;
	freopen("story.in","r",stdin) ;
	freopen("story.out","w",stdout) ;
	ios::sync_with_stdio(false) ;
	cin.tie(0) ;
	cout.tie(0) ;
	cin >> n >> k >> m ;
	for(i=1;i<=n;i++){
		cin >> a[i] ;
		for(j=1;j<=k;j++){
			vis[i][j] = vis[i-1][j] ;
			if(j==a[i]){
				vis[i][j]++ ;
			}
		}
	}
	while(m--){
		cin >> f ;
		if(f==1){
			cin >> p >> v ;
			if(a[p]==v){
				continue ;
			}
			if(a[p]>k && v<=k){
				for(i=p;i<=n;i++){
					vis[i][v]++ ;
				}
			}else {
				if(a[p]<=k && v>k){
					for(i=p;i<=n;i++){
						vis[i][a[p]]-- ;
					}
				}else {
					if(a[p]<=k && v<=k){
						for(i=p;i<=n;i++){
							vis[i][a[p]]-- ;
							vis[i][v]++ ;
						}
					}
				}
			}
			a[p] = v ;
		}else {
			siz = LONG_LONG_MAX ;
			L = 1 ;
			rr = n ;
			while(L<=rr){
				midd = (L+rr) >> 1 ;
				l = midd ;
				r = n ;
				ans = -1 ;
				while(l<=r){
					mid = (l+r) >> 1 ;
					if(check(midd,mid)){
						ans = mid ;
						r = mid-1 ;
					}else {
						l = mid+1 ;
					}
				}
				if(ans!=-1){
					L = midd+1 ;
					siz = min(siz,ans-midd+1) ;
				}else {
					rr = midd-1 ;
				}
			}
			if(siz==LONG_LONG_MAX){
				cout << -1 << '\n' ;
			}else {
				cout <<siz <<'\n' ;
			}
		}
	}
	return 0 ;
}
