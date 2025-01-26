#include<bits/stdc++.h>
using namespace std;

int a[7];
int k;

bool isdata(){
	for(int i=1;i<=6;i++){
		cin>>a[i];
		if(a[i]==0) k++;
	}
	if(k==6) return false;
	else return true;
}

int main(){
	
	freopen("box.in","r",stdin);
	freopen("box.out","w",stdout);
	while(!isdata()){
		int ans;
		for(int i=6;i>=1;i--){
			switch(i){
				case 6: ans+=a[i];
						break;
				case 5: ans+=a[i];
						a[1]=a[1]-11*a[i];
						if(a[1]<0) a[1]=0;
						break;
				case 4: ans+=a[i];
						if(a[2]/5<a[i]){
							a[1]=a[1]-(a[i]*5-a[2])*4;
							if(a[1]<0) a[1]=0;
						}
						a[2]=a[2]-5*a[i];
						if(a[2]<0) a[2]=0;
						break;
				case 3: ans+=a[i]/4+(a[i]%4!=0);
						if(a[i]%4!=0){
							switch(4-a[i]%4){
								case 1: a[2]-=1;
										a[1]-=5-a[2]*(a[2]<0)*4;
										if(a[2]<0) a[2]=0;
										if(a[1]<0) a[1]=0;
										break;
								case 2: a[2]-=3;
										a[1]-=6-a[2]*(a[2]<0)*4;
										if(a[2]<0) a[2]=0;
										if(a[1]<0) a[1]=0;
										break;
								case 3: a[2]-=4;
										a[1]-=11-a[2]*(a[2]<0)*4;
										if(a[2]<0) a[2]=0;
										if(a[1]<0) a[1]=0;
										break;
							}
						}
				case 2: ans+=a[i]/9+(a[i]%9!=0);
						if(a[i]%9!=0){
							a[1]-=4*(a[i]%9!=0);
							if(a[1]<0) a[1]=0;	
						}
						break;
				case 1: ans+=a[i]/36+(a[i]%36!=0);
			}
		}
		cout<<ans<<endl;
	}
	//判断写了一个小时没有输出…… 
	//求放过，给点分…… 
	return 0;
}
