#include <bits/stdc++.h>
using namespace std;
const int m=36;
int main(){
	int a,b,c,d,e,f,all=0;
	while(scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f)){
		if(a==0 &&b==0&&c==0&&d==0&&e==0&&f==0) break;
		all=a*1+b*4+c*9+d*16+e*25+f*36;
		if(all%m==0) cout<<all/m<<endl;
		else cout<<all/m+1<<endl;
	}
	return 0;
}

