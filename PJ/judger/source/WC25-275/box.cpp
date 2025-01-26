#include<bits/stdc++.h>
#define int long long
using namespace std;
int a,b,c,d,e,f;
signed main(){
	while(cin>>a>>b>>c>>d>>e>>f){
		if(a==0 && b==0 && c==0 && d==0 && e==0 && f==0)return 0;
		else cout<<((a+5)/6+(b+2)/3*2+(c+1)/2*3+d*4+e*5+f*6)/6<<'\n';
	}
	return 0;
}
