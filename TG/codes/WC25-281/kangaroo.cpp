#include<bits/stdc++.h>
using namespace std ;

    const int MAXN = 5e4 + 10 ;
    int n ;
    long long a[MAXN] , c[MAXN] , m[MAXN] ;
    int fc = 1 , fm = 1 ;
    int ans ;

bool cmp ( int x , int y )
{
	if ( x > y ) return 1 ;
	else return 0 ;
}

int main ( )
{
	freopen("kangaroo.in" , "r" , stdin ) ;
	freopen("kangaroo.out" , "w" , stdout ) ;
	cin >> n ;
	for ( int i = 1 ; i <= n ; i ++ )
	{
	    cin >> a[i] ;
	}
	sort ( a + 1 , a + n + 1 , cmp ) ;
	int cnt = floor(a[1]/2) ;
	for ( int i = 1 ; i <= n ; i ++ )
	{
		if ( a[i] > cnt ) c[fc] = a[i] , fc ++ ;
		else if ( a[i] <= cnt ) m[fm] = a[i] , fm ++ ;
	}
	int noc = 1 , nom = 1 ;
	for ( int i = 1 ; i <= n ; i ++ )
	{
		if ( noc >= fc || nom >= fm ) break ;
	    if ( c[noc] >= 2 * m[nom] )
	    {
	    	noc ++ ;
	    	nom ++ ;
	    	ans ++ ;
		}
		else if ( c[noc] < 2 * m[nom] )
		{
			nom ++ ;
		}
	} 
	
	cout << ans << endl ;
	
	return 0 ;
}
