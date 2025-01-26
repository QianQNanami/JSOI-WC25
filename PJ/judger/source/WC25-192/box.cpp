#include<bits/stdc++.h>
using namespace std;
int a[70010][16];
int main(){
	int n=1;
	for(int i=1;i<=6;i++)cin>>a[n][i];
	n+=1; 
	while (a[n-1][1]!=0||a[n-1][2]!=0||a[n-1][3]!=0||a[n-1][4]!=0||a[n-1][5]!=0||a[n-1][6]!=0){
		for(int i=1;i<=6;i++){
			cin>>a[n][i];
		}
		n+=1;
	}
	n-=1;
	for(int i=1;i<n;i++){//¶©µ¥Êýn¸ö 
	int bao=0; 
		for(int j=6;j>=1;j--){
			if(a[i][j]>0){
				if(j==6)bao+=a[i][j];//6¾¡ 
				if(j==5){
					bao+=a[i][j];
					a[i][1]-=11;//5¾¡ 
				}
				if(j==4){
					bao+=a[i][j];
					for(int i=1;i<=a[i][j];i++){
						if(a[i][2]>=5)a[i][2]-=6;
						if(a[i][2]==4){
							a[i][2]=0;
							a[i][1]-=4;
						}
						if(a[i][2]==3){
							a[i][2]=0;
							a[i][1]-=8;
						}
						if(a[i][2]==2){
							a[i][2]=0;
							a[i][1]-=12;
						}
						if(a[i][2]==1){
							a[i][2]=0;
							a[i][1]-=16;
						}
				}//4¾¡  
				}
				if(j==3){
					if(a[i][j]%4==0){
						bao+=a[i][j]/4;
						a[i][j]=0; 
					}
					else{
						bao+=a[i][j]/4;
						a[i][j]%=4;
						bao+=1;
						if(a[i][j]==3){
							if(a[i][2]>0){
								a[i][2]-=1;
								a[i][1]-=5;
							}
							else a[i][1]-=9;	
						}
						if(a[i][j]==1){
							if(a[i][2]>0){
								a[i][2]-=5;
								a[i][1]-=7;
							}
							else a[i][1]-=27;		
						}	
						if(a[i][j]==2){
							if(a[i][2]>0){
								a[i][2]-=3;
								a[i][1]-=6;
							}
							else a[i][1]-=18;	
						}		
					} 	 
				}//3¾¡ 
				if(j==2){
					if(a[i][j]%9==0){
						bao+=a[i][j]/9;
						a[i][j]=0;
					}
					else{
						bao+=a[i][j]/9;
						a[i][j]%=9;
						a[i][1]-=36-a[i][j]*9;
					}
				}
				if(j==1){
					if(a[i][j]%36==0){
						bao+=a[i][j]/36;
					}
					else{
						bao+=a[i][j]/36+1;
					}
				}
			}
		}
		cout<<bao<<endl;
	}	
	return 0;
}
