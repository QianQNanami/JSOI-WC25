#include<bits/stdc++.h>
using namespace std;
const int N=6;
int a[N+10],s,x;
int main(){
	for(int i=1;i<=6;i++) cin>>a[i],s+=a[i];
	while(s!=0){
		s=x=0;
		if(a[6]>0) x+=a[6];
		if(a[5]>0){
			x+=a[5];
			a[1]=max(a[1]-a[5]*11,0);
		}
		if(a[4]>0){
			x+=a[4];
			if(a[2]-a[4]*5>=0) a[2]-=a[4]*5;
			else{
				a[1]=max(0,a[1]-(a[4]*5-a[2]));
				a[2]=0;
			}
		}
		if(a[3]>0){
			x+=a[3]/4+(a[3]%4==0?0:1);
			if(a[3]%4!=0){
				int ts=a[3]%4;
				if(ts==3){
					if(a[2]>0){
						a[2]--;
						a[1]=max(0,a[1]-5);
					}
					else a[1]=max(0,a[1]-9);
				}
				else if(ts==2){
					if(a[2]>0){
						a[2]--;
						a[1]=max(0,a[1]-5);
					}
					else{
						a[1]=max(0,a[1]-(6+(3-a[2])*4));
						a[2]=0;
					}
				}
				else {
					if(a[2]>=5){
						a[2]-=5;
						a[1]=max(0,a[1]-7);
					}
					else{
						a[1]=max(0,a[1]-(7+(5-a[2])*4));
						a[2]=0;
					}
				}
			}
		}
		if(a[2]>0){
			x+=a[2]/9+(a[2]%9==0?0:1);
			if(a[2]%9!=0) a[1]-=9*(a[2]%4);
		}
		if(a[1]>0) x+=a[1]/36+(a[1]%36==0?0:1);
		cout<<x<<endl;
		for(int i=1;i<=6;i++) cin>>a[i],s+=a[i];
	}
	return 0;
}
