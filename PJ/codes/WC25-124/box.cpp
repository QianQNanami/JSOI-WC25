#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f,ans;
int main(){
	ios::sync_with_stdio(false);
	while(1){
		cin>>a>>b>>c>>d>>e>>f;
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)break;
		int total=a+b*4+c*9+d*16+e*25+f*36;
		cout<<(total-1)/36+1<<endl;
	}
	return 0;
}
