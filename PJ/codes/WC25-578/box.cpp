#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	int cnt;
	while(cin>>a>>b>>c>>d>>e>>f){
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)return 0;
		cnt=0;
		cnt+=f;
		while(e){
			if(c>=1&&a>=2){
				e-=1;
				c-=1;
				a-=2;
				cnt++;
			}else if(b>=1&&a>=7){
				e-=1;
				b-=1;
				a-=7;
				cnt++;
			}else if(b>=2&&a>=3){
				e-=1;
				b-=2;
				a-=3;
				cnt++;
			}else if(a>=11){
				e--;
				a-=11;
				cnt++;
			}else{
				cnt++;
				break;
			}
		}
		while(d){
			if(c>=1&&b>=1&&a>=7){
				d-=1;
				b-=1;
				a-=7;
				c-=1;
				cnt++;
			}else if(c>=2&&a>=1){
				d--;
				c-=2;
				a--;
				cnt++;
			}else if(c>=1&&b>=2&&a>=3){
				d--;
				c--;
				b-=2;
				a-=3;
				cnt++;
			}else if(b>=1&&d>=1){
				d-=2;
				b--;
				cnt++;
			}else if(b>=1&&a>=16){
				d--;
				b--;
				a-=16;
				cnt++;
			}else if(b>=2&&a>=12){
				d--;
				b-=2;
				a-=12;
				cnt++;
				
			}else if(b>=3&&a>=8){
				d--;
				b-=3;
				a-=8;
				cnt++;
			}else if(b>=4&&a>=4){
				d--;
				b-=4;
				a-=4;
				cnt++;
			}else if(b>=5){
				b-=5;
				d--;
				cnt++;
			}else{
				cnt++;
				break;
			}
				
		}
		while(c){
			if(b>=1&&a>=23){
				c--;
				b--;
				a-=23;
				cnt++;
			}else if(b>=2&&a>=19){
				c--;
				b-=2;
				a-=19;
				cnt++;
			}else if(b>=3&&a>=15){
				c--;
				b-=3;
				a-=15;
				cnt++;
			}else if(b>=4&&a>=11){
				c--;
				b-=4;
				a-=11;
				cnt++;
			}else if(b>=5&&a>=7){
				c--;
				b-=5;
				a-=7;
				cnt++;
			}else if(b>=6&&a>=3){
				c--;
				b-=6;
				a-=3;
				cnt++;
			}else{
				cnt++;
				break;
			}
		}
		while(b){
			if(a>=32){
				b--;
				a-=32;
				cnt++;
			}else{
				cnt++;
				break;
			}
		}
		if(a%32==0)cnt+=a/32; 
		else cnt++;
		cout<<cnt;
	}
	return 0;
}
