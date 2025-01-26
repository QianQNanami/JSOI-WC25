#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f;
int main(){
	cin>>a>>b>>c>>d>>e>>f;
	while(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
		if((a+4*b+9*c+16*d+25*e+36*f)%36!=0) cout<<(a+4*b+9*c+16*d+25*e+36*f)/36+1<<endl;
		else cout<<(a+4*b+9*c+16*d+25*e+36*f)/36<<endl;
		cin>>a>>b>>c>>d>>e>>f;
	}
	return 0;
} 
