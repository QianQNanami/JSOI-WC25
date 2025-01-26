#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a,b,c,d,e,f,sum;
signed main(){
	while(1){
		cin>>a>>b>>c>>d>>e>>f;
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0) break;
		if((1*a+4*b+9*c+16*d+25*e+36*f)%36!=0) sum=1;
		cout<<(1*a+4*b+9*c+16*d+25*e+36*f)/36+sum<<endl;
	}
	return 0;
}
