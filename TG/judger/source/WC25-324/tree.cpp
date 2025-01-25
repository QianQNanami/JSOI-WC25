# include<bits/stdc++.h>
using namespace std ;

const int N = 100000 + 10 ;
long long n ;
struct node {
	long long v , w ;
};
vector < node > g[N] ;
long long value[N] ;
long long root ;
long long father[N] ;
long long ans ;

void Value ( int s ){
	if ( g[s].size() == 0 && s != root ){
		//cout << 1 << s ;
		
		value[s] = value[s] ;
	}
	else {
		for ( int i = 0 ; i < g[s] . size() ; ++ i ){
			int v = g[s][i] . v ;
			Value(v) ;
			
			value[s] = value[s] + value[v] ;

		}
	}
}
int main() {
	
	freopen( "tree.in" , "w" , stdin ) ;
	freopen( "tree.out" , "r" , stdout ) ;

	cin >> n ;
	for ( int i = 1 ; i <= n ; ++ i ) {
		int f , w ;
		cin >> w >> f ;
		if ( f == 0 ) {
			root = i ;
			value[i] = w ;
			father[i] = f ;
			continue ;
		}
		g[f].push_back( { i , w } ) ;
		father[i] = f ;
		value[i] = w ;
	}
    Value(root) ;
//	for ( int i = 1 ; i <= n ; ++ i ) {
//		cout << i << " " << value[i] << endl ;
//	}
	for ( int i = 1 ; i <= n ; ++ i ) {   // i节点为第一棵子树根 
		if ( i != root ){
			for ( int j = 1 ; j <= n ; ++ j ){  // j节点为第二棵子树根 
			if ( i != j ){
				long long value_root ;
				long long value_i ;
				long long value_j ;
				if ( father[i] == j ){
					value_root = value[root] - value[j] ;
					value_i = value[i] ;
					value_j = value[j] - value[i] ;
				}
				if ( father[j] == i ){
					value_root = value[root] - value[i] ;
					value_i = value[i] - value[j] ;
					value_j = value[j] ;
				}
				else {
					value_root = value[root] - value[i] - value[j] ;
					value_i = value[i] ;
					value_j = value[j] ;
				}
				if ( value_root == value_i && value_i == value_j ){
					ans ++ ;
				}
				
			} 
				
			}
		}

	}
	cout << ans ;
	fclose(stdin) ;
	fclose(stdout) ;



	return 0 ;
}
