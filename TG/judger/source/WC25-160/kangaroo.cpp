#include <bits/stdc++.h>
#define ll long long
#define db(s,a) cout << s << ":" << a << endl
#define dbarr(a,n) for(ll i=1;i<=n;i++) cout << a[i] << " " ; cout << endl ;
#define isok cout << "ok" << endl
using namespace std ;
struct node{
	ll k , i ;
	bool operator<(const node &e) const{
		return k<e.k ;
	}
};
ll n , i , cnt , a[50005] ;
priority_queue<node> q ;
int main(){
//	freopen("data.in","r",stdin) ;
	freopen("kangaroo.in","r",stdin) ;
	freopen("kangaroo.out","w",stdout) ;
	ios::sync_with_stdio(false) ;
	cin.tie(0) ;
	cout.tie(0) ;
	cin >> n ;
	for(i=1;i<=n;i++){
		cin >> a[i] ;
		q.push({a[i],i}) ;
	}
	sort(a+1,a+1+n,greater<ll>()) ;
	for(i=1;i<=n;i++){
		if(!q.size()){
			break ;
		}
		if(a[i]==LONG_LONG_MAX){
			continue ;
		}
		while(q.size() && (a[i]<q.top().k*2 || a[q.top().i]==LONG_LONG_MAX)){
			q.pop() ;
		}
		if(q.size()){
			cnt++ ;
			a[q.top().i] = LONG_LONG_MAX ;
		}
	}
	cout << cnt ;
	return 0 ;
}
