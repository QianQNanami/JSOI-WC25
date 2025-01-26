#include<bits/stdc++.h>
using namespace std;
long long a,b,c,d,e,f;
int main(){
	while(cin>>a>>b>>c>>d>>e>>f){
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0) break;
		long long v=1*1*a+2*2*b+3*3*c+4*4*d+5*5*e+6*6*f;
		if(v%36==0) cout<<v/36<<endl;
		else cout<<v/36+1<<endl;
	}
	return 0;
}
