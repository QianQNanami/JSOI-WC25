#include<bits/stdc++.h>
using namespace std ;

    const int MAXN = 5e4 + 10 ;
    const int MAXK = 30 + 5 ;
    int n , m , k ;
    int a[MAXN] ;
    int p[MAXK] ;
    int ff[MAXK] ;

int main ( )
{
	freopen("story.in" , "r" , stdin ) ;
	freopen("story.out" , "w" , stdout ) ;
	cin >> n >> k >> m ;
	for ( int i = 1 ; i <= n ; i ++ )
	{
	    cin >> a[i] ;
	}
	for ( int i = 0 ; i < m ; i ++ )
	{
		int na ;
		cin >> na ;
		if ( na == 1 ) 
		{
			int p , v ;
			cin >> p >> v ;
			a[p] = v ;
		}
		else if ( na == 2 )
		{
			int da = 50010 ;
			for ( int j = 1 ; j <= n - k + 1 ; j ++ )
			{
					int cnt = 0 ;
				for ( int l = 0 ; l < n ; l ++ )
				{	
					if ( j + l <= n && ff[a[j + l]] == 0 )
					{
						ff[a[j + l]] = 1 ;
						cnt ++ ;
						if ( cnt == k ) da = min ( da , l + 1 ) ;
						if ( cnt == k ) continue ;
					}
				}
				for ( int l = 0 ; l <= k ; l ++ )
				{
					ff[l] = 0 ;
				}
			}
			if ( da == 50010 ) cout << "-1" << '\n' ;
			else cout << da << '\n' ;
		}
	}
	cout << endl ;
	return 0 ;
}
/*
4 3 5
2 3 1 2
2 
1 3 3 
2 
1 1 1
2

6 3 6
1 2 3 2 1 1
2
1 2 1
2
1 4 1
1 6 2
2


6 3 1
1 1 3 1 1 2
2
*/
