# include<bits/stdc++.h>
using namespace std ;

const int N = 500000 + 10 ;
int n , m , k ;
int a[N] ;
int ans[50] ;
map < int , int > vis ;
int visn[50] ;
int main(){
	freopen( "story.in" , "w" , stdin) ;
	freopen( "story.out" , "r" , stdout) ;
	memset ( ans , INT_MAX , sizeof ( ans ) ) ;
	cin >> n >> k >> m ;
	for ( int i = 1 ; i <= n ; ++ i ){
		cin >> a[i] ;
		vis[i] ++ ;

	}
	int cnt = 1 ;
	for ( int i = 1 ; i <= m ; ++ i ){
		int j ;
		cin >> j ;
		if ( j == 1 ){
			int p , v ;
			cin >> p >> v ;
			vis[a[p]] -- ;
			a[p] = v ;
			vis[v] ++ ;
		}
		if ( j == 2 ){
			if ( vis.size() < k ){
			    ans [cnt] = -1 ;
			}
			memset ( visn , 0 , sizeof ( visn ) ) ;
			for ( int s = 1 ; s <= n ; ++ s ){
				for ( int q = i + 1 ; q <= n ; ++ q ){
					int len = 0 , len1 ;
					for ( int l = s ; l <= q ; ++ l ){
						if ( !visn[a[l]] ){
							len ++ ;
							visn[a[l]] ++ ;
						}
						if ( len == vis . size() ){
							ans [cnt] = min( ans[cnt] , len1 ) ;
							break ;
						}
					}
				}
			}
			cnt ++ ;
		}
		
	}
	for ( int i = 1 ; i < cnt ; ++ i ) cout << ans[i] << endl ;
	

	fclose(stdin) ;
	fclose(stdout) ;
	
	return 0 ;
}

