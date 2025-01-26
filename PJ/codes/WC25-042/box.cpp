#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,c,d,e,f,ans=0,A,B,C,D,E,F,cnt=0; 
	while(cin>>a>>b>>c>>d>>e>>f){
		cnt=0;
		if(a==b==c==d==e==f==0) break;
		A=1*a;
		B=4*b;
		C=9*c;
		D=16*d;
		E=25*e;
		F=36*f;
		cnt=A+B+C+D+E+F;
		ans=cnt/36+1;
		cout<<ans<<endl;
	}
	return 0;
}

