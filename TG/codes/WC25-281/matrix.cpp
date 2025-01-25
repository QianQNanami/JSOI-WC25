#include<bits/stdc++.h>
using namespace std ;

    const int MAXN = 400 + 10 ;
    int n ;
    int G[MAXN][MAXN] ;
    int dp[MAXN][MAXN] ;
    int ans = -10000 ;

int main ( )
{
	freopen("matrix.in" , "r" , stdin) ;
	freopen("matrix.out" , "w" , stdout ) ;
	cin >> n ;
	for ( int i = 1 ; i <= n ; i ++ )
	{
		for ( int j = 1 ; j <= n ; j ++ )
		{
			cin >> G[i][j] ;
			dp[i][j] = -10000 ;
		}
	}
	for ( int i = 1 ; i <= n ; i ++ )
	{
		dp[1][i] = G[1][i] ;
	}
	for ( int i = 1 ; i <= n ; i ++ )
	{
		dp[i][1] = G[i][1] ;
	}
	for ( int i = 2 ; i <= n ; i ++ )
	{
		for ( int j = 2 ; j <= n ; j ++ )
		{
			for ( int k = 1 ; k < min ( i , j ) ; k ++ )
			{
				dp[i][j] = max ( dp[i][j] , G[i][j] + G[i - k][j - k] - G[i - k][j] - G[i][j - k] ) ;
			}
		}
	}
	for ( int i = 2 ; i <= n ; i ++ )
	{
		for ( int j = 2 ; j <= n ; j ++ )
		{
			ans = max ( ans , dp[i][j] ) ;
		}
	}
	cout << ans << endl ;
	
	return 0 ;
}
