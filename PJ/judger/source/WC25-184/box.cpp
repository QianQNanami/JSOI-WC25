#include<bits/stdc++.h>
using namespace std;
int a[10010],b,c,d,e,f,i;
int ans=0,s=0;
int main(){
	while(cin>>a[++i]){
		cin>>b>>c>>d>>e>>f;
		if(a[i]==0&&b==0&&c==0&&d==0&&e==0&&f==0) return 0;
		else{
		    s=a[i]*1+b*4+c*9+d*16+e*25+f*36;
		    ans=s/36;
		    cout<<ans<<endl;
		}
	}
	return 0;
}
