#include<bits/stdc++.h>
using namespace std ;

    const int MAXN = 1e5 + 10 ;
    int n ;
    int num ;
    bool a[MAXN] ;
    int ans ;

struct Node
{
	int w ;
	int fa ;
	int tot ;
}tree[MAXN] ;

void build ( int ff )
{
    tree[tree[ff].fa].tot += tree[ff].tot ;
	if ( tree[ff].fa == 0 ) return ;
	build ( tree[ff].fa ) ;
}

bool fi ( int x , int y )
{
	if ( tree[y].fa == x ) return 1 ;
	if ( tree[y].fa == 0 ) return 0 ;
	fi ( x , tree[y].fa ) ;
}

int main ( )
{
	freopen("tree.in" , "r" , stdin ) ;
	freopen("tree.out" , "w" , stdout ) ;
	cin >> n ;
	for ( int i = 1 ; i <= n ; i ++ )
	{
	    cin >> tree[i].w >> tree[i].fa ;
	    num += tree[i].w ;
	    tree[i].tot = tree[i].w ;
	    a[tree[i].fa] = 1 ; 
	    if ( tree[i].fa == 0 ) a[i] = 1 ;
	}
	for ( int i = 1 ; i <= n ; i ++ )
	{
		if ( a[i] == 0 ) 
		{
			build ( i ) ;
		}
	}
	if ( num % 3 != 0 ) cout << "0" << endl ;
	else
	{
		for ( int i = 1 ; i <= n ; i ++ )
		{
			if ( tree[i].tot == num / 3 ) 
			{
				for ( int j = 1 ; j <= n ; j ++ )
				{
				    if ( i != j )
				    {
				    	if ( tree[j].tot == num / 3 ) ans ++ ;
					    if ( tree[j].tot - tree[i].tot == num / 3 ) ans ++ ;
					}
					
				}
			}
		}
		cout << ans << endl ;
	}
	
	return 0 ;
}

/*
3
1 0 
1 1 
1 2
*/
