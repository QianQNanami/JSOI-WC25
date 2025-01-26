#include<bits/stdc++.h>
using namespace std;
int main(){
	while(1){
		int a,b,c,d,e,f;
		cin>>a>>b>>c>>d>>e>>f;
		if(a==0&&a==b&&b==c&&c==d&&d==e&&e==f){
			return 0;
		}
		else{
			int ans=0;
			ans+=f;
			ans+=ceil((a+4*b+9*c+16*d+25*f))/36;
			cout<<ans<<endl;
		}
	}
	
	return 0;
}
