#include <bits/stdc++.h>
#define ll long long
#define db(s,a) cout << s << ":" << a << endl
#define dbarr(a,n) for(ll i=1;i<=n;i++) cout << a[i] << " " ; cout << endl ;
#define isok cout << "ok" << endl
using namespace std ;
ll n , i , j , u , v , x , y , z , cnt , lca , root , dep[100005] , V[100005] , siz[100005] , st[100005][25] ;
vector<ll> a[100005] ;
void dfs(ll u , ll deep){
    dep[u] = deep ;
    siz[u] = V[u] ;
    for(auto &&v : a[u]){
        dfs(v,deep+1) ;
        siz[u] += siz[v] ;
    }
}
ll LCA(ll u , ll v){
    if(dep[u]<dep[v]){
        swap(u,v) ;
    }
    ll t = dep[u]-dep[v] ;
    for(ll i=0;i<22;i++){
        if((t >> i)&1){
            u = st[u][i] ;
        }
    }
    if(u==v){
        return u ;
    }
    for(ll i=22;i>=0;i--){
        if(st[u][i]==st[v][i]){
            continue ;
        }
        u = st[u][i] ;
        v = st[v][i] ;
    }
    return st[u][0] ;
}
int main(){
//	freopen("data.in","r",stdin) ;
	freopen("tree.in","r",stdin) ;
	freopen("tree.out","w",stdout) ;
	ios::sync_with_stdio(false) ;
	cin.tie(0) ;
	cout.tie(0) ;
    cin >> n ;
    for(i=1;i<=n;i++){
        cin >> V[i] >> u ;
        if(u==0){
        	root = i ;
		}
        a[u].push_back(i) ;
        st[i][0] = u ;
    }
    dfs(root,1) ;
    for(j=1;(1 << j)<=n;j++){
        for(i=1;i<=n;i++){
            st[i][j] = st[st[i][j-1]][j-1] ;
        }
    }
    if(n<=2000){
	    for(i=1;i<=n;i++){
	    	if(i==root){
	    		continue ;
			}
	    	for(j=1;j<i;j++){
	    		if(j==root){
	    			continue ;
				}
				lca = LCA(i,j) ;
				if(lca==i){
					x = siz[root]-siz[i] ;
					y = siz[i]-siz[j] ;
					z = siz[j] ;
				}else {
					if(lca==j){
						x = siz[root]-siz[j] ;
						y = siz[j]-siz[i] ;
						z = siz[i] ;
					}else {
						x = siz[root]-siz[i]-siz[j] ;
						y = siz[i] ;
						z = siz[j] ;
					}
				}
				if(x==y && y==z){
					cnt++ ;
				}
			}
		}
	}else {
		for(i=1;i<=n;i++){
	    	if(i==root){
	    		continue ;
			}
	    	for(j=1;j<i;j++){
	    		if(j==root){
	    			continue ;
				}
				lca = LCA(i,j) ;
				if(lca==i){
					x = siz[root]-siz[i] ;
					y = siz[i]-siz[j] ;
					z = siz[j] ;
				}else {
					if(lca==j){
						x = siz[root]-siz[j] ;
						y = siz[j]-siz[i] ;
						z = siz[i] ;
					}else {
						x = siz[root]-siz[i]-siz[j] ;
						y = siz[i] ;
						z = siz[j] ;
					}
				}
				if(x==y && y==z){
					cnt++ ;
					break ;
				}
			}
		}
	}
	cout <<cnt ;
    return 0 ;
}
