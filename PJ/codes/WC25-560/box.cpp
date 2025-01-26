#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c,d,e,f;
	while(cin>>a>>b>>c>>d>>e>>f&&(a||b||c||d||e||f)){
		cout<<(a*1+b*4+c*9+d*16+e*25+f*36)/36<<endl;
		a=b=c=d=e=f=0;
	}
	return 0;
}
