# include<bits/stdc++.h>
using namespace std ;

const int N = 400 + 10 ;
long long  a[N][N] ;
long long  ans = INT_MIN ;
int n ;
long long Dylan ( int x , int y , int k ){
	int h = 0 , h1 = 0 ;
	int v = x , vv = x + k - 1 ;
	for ( int i = x ; i <= x + k - 1 ; ++ i ){
		h += a[i][v] ;
		v ++ ;
		h1 += a[i][vv] ;
		vv -- ;
	}
	return h - h1 ;
	
}


int main(){
	
	freopen( "matrix.in" , "w" , stdin ) ;
	freopen( "matrix.out" , "r" , stdout ) ;
	cin >> n ;
	for ( int i = 1 ; i <= n ; ++ i ){
		for ( int j = 1 ; j <= n ; ++ j ){
			cin >> a[i][j] ;
		}
	}
	for ( int i = 1 ; i <= n ; ++ i ){
		for ( int j = 1 ; j <= n ; ++ j ){
			for ( int s = 1 ; s <= n - i + 1 ; ++ s ){
				ans = max ( ans , Dylan ( i , j , s ) ) ;
			}
		}
	}
	cout << ans ;
	
	
	
	fclose(stdin) ;
	fclose(stdout) ;
	
	
	
	
	
	
	
	
	
	
	return 0 ;
}
