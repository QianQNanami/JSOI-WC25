#include <bits/stdc++.h>
using namespace std;
int main(){
	for(int i=1;i<=70000;i++){
		int a[10],y[3];
		for(int j=1;j<=6;j++){
			cin>>a[j];
		}
		if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0&&a[6]==0){
			break;
		}
		else{
			int sum=0;
			sum+=a[6];//1
			sum+=a[5];
			sum+=a[4];
			if(a[1]<=a[5]*11){
				sum+=0;
			}
			else{
				y[1]=a[1]-a[5]*11;
			}
			if(a[2]<=a[4]*5){
					sum+=0;
			}
			else{
				y[2]=a[2]-a[4]*5;
			}
			if(a[3]%4==0){
				sum+=a[3]/4;
			}//2
			else{
				y[3]=a[3]%4;
			}
			if(y[3]==1){
				if(y[2]<=5){
					if(y[1]<=7){
						sum++;
					}
					else{
						sum++;
						y[1]-=7;
						if(y[1]%36==0){
							sum+=y[1]/36;
						}
						else{
							sum+=y[1]/36+1;
						}
					}
				}
				else{
					sum++;
					y[2]-=5;
					if(y[2]%9==0){
						sum+=y[2]/9;
					}
					else{
						sum+=y[2]/9+1;
					}
				}
			}
			if(y[3]==2){
				if(y[2]<=3){
					if(y[1]<=6){
						sum++;
					}
					else{
						sum++;
						y[1]-=6;
						if(y[1]%36==0){
							sum+=y[1]/36;
						}
						else{
							sum+=y[1]/36+1;
							}
					}
				}
				else{
					sum++;
					y[2]-=5;
					if(y[2]%9==0){
						sum+=y[2]/9;
					}
					else{
						sum+=y[2]/9+1;
					}
				}
			}
			if(y[3]==3){
				if(y[2]<=1){
					if(y[1]<=5){
						sum++;
					}
					else{
						sum++;
						y[1]-=5;
						if(y[1]%36==0){
							sum+=y[1]/36;
						}
						else{
							sum+=y[1]/36+1;
						}
					}
				}
				else{
					sum++;
					y[2]--;
					if(y[2]%9==0){
						sum+=y[2]/9;
					}
					else{
						sum+=y[2]/9+1;
					}
				}
			}
			cout<<sum<<endl;
			sum=0;
		}
	}
	return 0;
} 
/*
0 0 4 0 0 1
7 5 1 0 0 0
0 0 0 0 0 0
*/
