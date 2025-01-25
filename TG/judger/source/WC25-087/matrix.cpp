#include<iostream>
using namespace std ; 
int n , z , x , t , s ; 
int main (){
	freopen ("matrix.in","r",stdin)
	freopen ("matrix.out","w",stdin)
	cin >> n ; 
	int a[n+1][n+1] ; 
	for ( int i = 1 ; i <= n ; i ++ ){
		for ( int j = 1 ; j <= n ; j ++ ){
		cin >> a [i][j] ; 
		z = a [i][j] ; 
		x = a [n][n] ;
		}
	}
	for ( int i = 1 ; i < n ; i ++ ){
		for ( int j = 1 ; j <= n ; j ++ )
		if ( n == 2 ) {
			z = a [1][1] + a [2][2] ; 
			x = a [1][2] + a [2][1] ; 
			t = z - x ;
		}
		else
		{
			z = z + a [i+1][j+1] ; 
			x = s + a [n-i][n-j] ; 
			t = z - x ; 
		}
	}
	cout << t ; 
	
	return 0 ; 
} 
