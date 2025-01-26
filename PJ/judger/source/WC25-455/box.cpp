#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	while(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0){
		int cnt=0;
		if(f>0) cnt+=f;
		if(e>0){
			if(a>0){
				cnt+=e;
				if(floor(a/11)>e) a-=e*11;
				else if(floor(a/11)<=e) a%=11;
				else if(a<=11) a=0;
			}
		}
		if(d>0){
			if(b>0){
				cnt+=d;
				if(floor(b/5)>d) b-=d*5;
				else if(floor(b/5)<=d) b%=5;
				else if(b<=5){
					if(a>=(20-4*b)) a-=(20-4*b);
					else a=0;
				}
			}
		}
		if(c>0){
			cnt+=floor(c/4);
			c%=4;
		}
		if(c==3){
			cnt+=1;
			if(a>0&&b==0&&a>9) a%9;
			else if(a>0&&b==0) a=0;
			if(a>0&&a>=5) a%5;
			else if(a>0) a=0; 
			if(b>0) b-=1;
			
		}
		if(c==2){
			cnt+=1;
			if(b>0&&b<=3){
				if(a>=(18-4*b)){
					a-=(18-4*b);
				}else a=0;
				b=0;
			}
		}
		if(c==1){
			cnt+=1;
			if(b>0&&b<=5){
				if(a>=(27-4*b)){
					a-=(27-4*b);
				}else a=0;
				b=0;
			}else if(b>5){
				b-=5;
				if(a>=7) a-=7;
				else a=0;
			}
		}
		if(b>0){
			cnt+=floor(b/9);
			b%=9;
		}
		cnt+=a/36;
		if(a>0) cnt++;
		cout<<cnt<<endl;
		cin>>a>>b>>c>>d>>e>>f;
	}
	return 0;
}
