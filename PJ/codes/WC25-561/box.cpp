#include <bits/stdc++.h>
using namespace std;
int a[10];
int ans;
void shr(int i){
	for(int j=1;j<=i;j++){
		cin>>a[j];
	}
}
int main(){
	for(int j=1;j<=70000;j++){
		ans=0;
		int sum=0;
		shr(6);
		for(int i=1;i<=6;i++){
			sum+=a[i];
		}
		if(!sum){
			break;
		}
		for(int x=6;x>=0;x--){
			if(x==0){
			cout<<ans<<endl;
			}else{
				if(x==6&&a[6]>0){
				ans+=a[6];
			}
			else if(x==5&&a[5]>0){
				ans+=a[5];
				a[1]-=11*a[5];
			}
			else if(x==4&&a[4]>0){
				ans+=a[4];
				if(a[2]<=5*a[4]){
					a[1]=a[1]-(20*a[4]-4*a[2]);
					a[2]=0;
				}
				else{
					a[2]-=5*a[4];
				}
			}
			else if(x==3&&a[3]>0){
				ans=ans+(a[3]+3)/4;
				if(a[3]%4!=0){
					if(a[3]%4==1){
						if(a[2]<=5){
							a[1]=a[1]-(36-9-4*a[2]);
							a[2]=0;;
						}else{
							a[2]-=5;
							a[1]-=7;
						}
					}else if(a[3]%4==2){
						if(a[2]<=3){
							a[1]=a[1]-(36-18-4*a[2]);
							a[2]=0;;
						}else{
							a[2]-=3;
							a[1]-=6;
						}
					}else if(a[3]%4==3){
						if(a[2]<=1){
							a[1]=a[1]-(36-27-4*a[2]);
							a[2]=0;;
						}else{
							a[2]-=1;
							a[1]-=5;
						}
					}
				}
			}
			else if(x==2&&a[2]>0){
				ans=ans+(a[2]+8)/9;
				a[1]-=4*(a[2]%9);
			}
			else if(x==1){
				if(a[1]>0){
					ans=ans+(a[1]+35)/36;
				}
			}
		}
		}
	}
	return 0;
}
	
