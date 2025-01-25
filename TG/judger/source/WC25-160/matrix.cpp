#include <bits/stdc++.h>
#define ll long long
#define db(s,a) cout << s << ":" << a << endl
#define dbarr(a,n) for(ll i=1;i<=n;i++) cout << a[i] << " " ; cout << endl ;
#define isok cout << "ok" << endl
using namespace std ;
ll n , i , j , k , x , y , maxx = LONG_LONG_MIN , a[405][405] , d1[405][405][405] , d2[405][405][405] ;
int main(){
//	freopen("data.in","r",stdin) ;
	freopen("matrix.in","r",stdin) ;
	freopen("matrix.out","w",stdout) ;
	ios::sync_with_stdio(false) ;
	cin.tie(0) ;
	cout.tie(0) ;
	cin >> n ;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin >> a[i][j] ;
		}
	}
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			x = i+1 ;
			y = j+1 ;
			d1[i][x][y] = a[i][j]+a[x][y] ;
			while(x+1<=n && y+1<=n){
				x++ ;
				y++ ;
				d1[i][x][y] = d1[i][x-1][y-1]+a[x][y] ;
			}
		}
	}
	for(i=1;i<n;i++){
		for(j=n;j>=2;j--){
			x = i+1 ;
			y = j-1 ;
			d2[i][x][y] = a[i][j]+a[x][y] ;
			while(x+1<=n && y-1>=1){
				x++ ;
				y-- ;
				d2[i][x][y] = d2[i][x-1][y+1]+a[x][y] ;
			}
		}
	}
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			for(k=1;k<=n;k++){
				if(i+k>n || j+k>n){
					break ;
				}
				maxx = max(maxx,d1[i][i+k][j+k]-d2[i][i+k][j]) ;
			}
		}
	}
	cout <<maxx ;
	return 0 ;
}
