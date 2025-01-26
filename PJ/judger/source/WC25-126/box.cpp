#include <bits/stdc++.h>
using namespace std;
int a[10];
signed main(){
	ios::sync_with_stdio(false);
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	while(1){
		bool f=0;
		int ans=0;
		for(int i=1;i<=6;i++){
			cin>>a[i];
			if(a[i])f=1;
		}
		if(!f)break;
		if(a[6])ans+=a[6];
		if(a[5]){
			while(a[5]&&a[1]>=11)a[1]-=11,a[5]--,ans++;
			if(a[5]&&a[1])a[5]--,a[1]=0,ans++;
			ans+=a[5];
		}
		if(a[4]){
			while(a[4]&&a[2]>=5)a[2]-=5,a[4]--,ans++;
			if(a[4]&&a[2]&&a[1]>=20-4*a[2])a[1]=a[1]-20+4*a[2],a[4]--,a[2]=0,ans++;
			else if(a[4]&&a[2]&&a[1])a[1]=a[2]=0,a[4]--,ans++;
			while(a[4]&&a[1]>=20)a[1]-=20,a[4]--,ans++;
			if(a[4]&&a[1])a[1]=0,a[4]--,ans++;
			ans+=a[4];
		}
		if(a[3]){
			while(a[3]>=4)a[3]-=4,ans++;
			if(a[3]==3){
				ans++;
				a[3]=0;
				if(a[2]){
					a[2]--;
					if(a[1]>=5)a[1]-=5;
					else a[1]=0;
				}else{
					if(a[1]>=9)a[1]-=9;
					else a[1]=0;
				}
			}else if(a[3]==2){
				ans++;
				a[3]=0;
				if(a[2]==1){
					a[2]=0;
					if(a[1]>=14)a[1]-=14;
					else a[1]=0;
				}else if(a[2]>=2){
					a[2]-=2;
					if(a[1]>=10)a[1]-=10;
					else a[1]=0;
				}else{
					if(a[1]>=18)a[1]-=18;
					else a[1]=0;
				}
			}else if(a[3]==1){
				ans++;
				a[3]=0;
				if(a[2]==1){
					a[2]=0;
					if(a[1]>=23)a[1]-=23;
					else a[1]=0;
				}else if(a[2]==2){
					a[2]=0;
					if(a[1]>=19)a[1]-=19;
					else a[1]=0;
				}else if(a[2]==3){
					if(a[1]>=15)a[1]-=15;
					else a[1]=0;
				}else if(a[2]==4){
					a[2]=0;
					if(a[1]>=11)a[1]-=11;
					else a[1]=0;
				}else if(a[2]>=5){
					a[2]-=5;
					if(a[1]>=7)a[1]-=7;
					else a[1]=0;
				}
			}
		}
		if(a[2]){
			while(a[2]>=9)a[2]-=9,ans++;
			if(a[2]){
				ans++;
				if(a[1]>36-4*a[2])a[1]=a[1]-36+4*a[2];
				else a[1]=0;
				a[2]=0;
			}
		}
		if(a[1]){
			while(a[1]>=36)a[1]-=36,ans++;
			if(a[1])ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
