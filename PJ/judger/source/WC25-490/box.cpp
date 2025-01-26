#include<bits/stdc++.h>
using namespace std;
int a[10],ans;
bool flag;
int main()
{
	while(1){
		ans=0;
		flag=false;
		for(int i=1;i<=6;i++){
			cin>>a[i];
			if(a[i]!=0){
				flag=true;
			}
		} 
		if(!flag){
			break;
		}
		ans=ans+a[6]+a[3]/4;
		a[3]=a[3]%4;
		int ohf=a[5]-a[1]/11;
		if(ohf>=0){
			a[1]=a[1]%11;
			
		}else{
			a[1]=a[1]-a[5]*11;
		}
		ans+=a[5];
		int thf=a[4]-a[2]/5;
		if(thf>=0){
			a[2]=a[2]%5;
			if(a[1]>=20-4*a[2]){
				a[1]=a[1]-20+4*a[2];
				a[2]=0;
			}
		}else{
			a[2]=a[2]-a[4]*5;
		}
		ans+=a[4];
		if(a[3]==3){
			if(a[2]>=1&&a[1]>=5){
				a[2]--;
				a[1]-=5;
				
			}else{
				if(a[1]>=9){
					a[1]-=9;
				}
			}
			ans++;
		}if(a[3]==2){
			if(a[2]>=3&&a[1]>=6){
				a[2]-=3;
				a[1]-=6;
			}else{
				if(a[1]>=18-a[2]*4){
					
					a[1]=a[1]-18+a[2]*4;
					a[2]=0;
				}
			}
			ans++;
		}if(a[3]==1){
			if(a[2]>=5&&a[1]>=7){
				a[2]-=5;
				a[1]-=7;
			}else{
				if(a[1]>=27-a[2]*4){
					
					a[1]=a[1]-27+a[2]*4;
					a[2]=0;
				}
			}
			ans++;
		}
		
		ans+=a[2]/9;
		a[2]=a[2]%9;
		if(a[1]>=36-4*a[2]){
			a[1]=a[1]-36+4*a[2];
			a[2]=0;
		}
		if(a[2]!=0){
			ans++;
		}
		
		ans+=a[1]/36;
		if(a[1]!=0){
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}

