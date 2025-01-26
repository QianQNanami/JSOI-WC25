#include<bits/stdc++.h>
using namespace std;
int main(){
	while(1){
		long long a,b,c,d,e,f,ans=0;
		cin>>a>>b>>c>>d>>e>>f;
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)break;
		else{
			ans+=f;
			if(e>=1){
				for(long long i=1;i<=e;i++){
					a-=11;
					if(a<0)a=0;
					ans++;
				}
			}
			if(d>=1){
				for(long long i=1;i<=d;i++){
					if(b>=5){
						b-=5;
					}
					else{
						a-=(5-b)*4;
						if(a<0)a=0;
						b=0;
					}
					ans++;
				}
			}
			if(c>=1){
				while(c!=0){
					if(c>=4){
						c=c-4;
						ans++;
					}
					else{
						if(b>=2*c-2){
							b-=5-(2*c-2);
							a-=(36-(b*4+c*9));
							if(a<0)a=0;
							c=0;
							ans++;
						}
						else{
							a-=36-(c*9+b*4);
							if(a<0)a=0;
							ans++;
						}
					}
				}
			}
			if(b>=1){
				while(b!=0){
				if(b>=9){
					b-=9;
					ans++;
				}
				else{
					a-=36-b*4;
					if(a<0)a=0;
					ans++;
					b=0;
				}
			}
			}
			if(a>=1){
				while(a!=0){
				if(a>=36){
					a-=36;
					ans++;
				}
				else{
					a=0;
					ans++;
				}
			}
			}
			
			cout<<ans<<endl;
		}
		
	}
	return 0;
}
